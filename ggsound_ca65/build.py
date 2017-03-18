import os
from subprocess import call
import shlex
import shutil
import sys

nes_file = "demo.nes"
linker_cfg_file = "demo.cfg"
map_file = "demo.map"
debug_file = "demo.dbg"
ndx_file = "demo.nes.ndx"

include_paths = []

src_path = "./"
bin_path = "bin"

files =["demo.asm",
        "controller.asm",
        "ppu.asm",
        "sprite.asm",
        "ggsound.asm",
        "tracks.asm",
        "zp.asm",
        "ram.asm"]

def clean_build():
    if os.path.exists(nes_file):
        os.remove(nes_file)
    if os.path.exists(map_file):
        os.remove(map_file)
    if os.path.exists(debug_file):
        os.remove(debug_file)
    if os.path.exists(ndx_file):
        os.remove(ndx_file)
    if os.path.exists(bin_path):
        shutil.rmtree(bin_path, ignore_errors=True)

def make_build(additional_args):
    global files
    abs_include_paths = []
    for include_path in include_paths:
        abs_include_paths.append(os.path.normpath(include_path))

    file_names = [os.path.splitext(file_name)[0]
        for file_name in files]

    ca65_args = ["ca65", "-g"]

    for abs_include_path in abs_include_paths:
        ca65_args.append("-I")
        ca65_args.append(abs_include_path)

    clean_build()
    os.makedirs(bin_path)

    for file_name in file_names:
        ca65_args_file_name = list(ca65_args)
        ca65_args_file_name.append(os.path.normpath("%s/%s.asm" % (src_path, file_name)))
        ca65_args_file_name.append("-l")
        ca65_args_file_name.append(os.path.normpath("%s/%s.lst" % (bin_path, file_name)))
        ca65_args_file_name.append("-o")
        ca65_args_file_name.append(os.path.normpath("%s/%s.o" % (bin_path, file_name)))
        ca65_args_file_name.append("-DDEBUG")
        if additional_args != None:
            ca65_args_file_name.extend(additional_args)
        call(ca65_args_file_name)

    ld65_args = ["ld65", "-o", nes_file, "-C", linker_cfg_file, "-m", map_file, "--dbgfile", debug_file]
    ld65_args.extend([os.path.normpath("%s/%s.o") % (bin_path, file_name) for file_name in file_names])
    call(ld65_args)

if len(sys.argv) == 1:
    make_build(None)

if len(sys.argv) >= 2:
    if "clean" in sys.argv:
        clean_build()
    else:
        additional_args = []
        for i in range(1, len(sys.argv)):
            additional_args.append(sys.argv[i])
        make_build(additional_args)
