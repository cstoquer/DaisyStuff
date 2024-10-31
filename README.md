# DaisyStuff

Daisy Seed examples and utilities

## Prerequistes

- Have the Toolchain installed. Instructions [here](https://github.com/electro-smith/DaisyWiki/wiki/1.-Setting-Up-Your-Development-Environment).
- Update git submodules:
```sh
git submodule update --init --recursive
```
- Build Daisy libraries:
```sh
sh build_libs.sh
```


## Build and flash firmware to Daisy

- Move to the folder of the firware you want to compile. For instance:
```sh
cd firmwares/Blink
```
- Put your Daisy Seed into flashable mode by holding down the BOOT button, and pressing the RESET button.
- Depending on your OS, the build commands may be different:

### On Mac

- `make` to build the firmware
- `make program-dfu` to flash the firmware using USB
- `make program` to flash the firmware using a debug probe (e.g. [ST-link V3 mini](https://www.electro-smith.com/daisy/stlink-v3mini))


### On Windows

- `task build_and_program_dfu` to build and flash the firmware using USB
- `task build_and_program` to build and flash using a debug probe

### On Linux

?
