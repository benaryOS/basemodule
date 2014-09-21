# benaryOS (Module)

## What is it?

benaryOS is a operating system, developed by benaryorg.

This is a module for it.

## Building it

benaryOS (and it's modules) is using `make`:

	$ make

This will create a `module` file, in a `build`
directory, you can then add to your kernel.

## Booting it

You can boot the kernel using the following options.

### QEMU

Just run `qemu -kernel kernel -initrd module.bin`.

### ISO

Soon there will be a way to create a `.iso`. For now
you can use the scripts provided by benarydingOS
(https://github.com/benaryorg/benarydingOS).

#### Virtualbox/VMWare

Just use the .iso to boot.

### Real Hardware

Either use grub (see the iso) or boot the iso from a USB/CDROM.

# License

At the moment none. This means it is proprietary, but thats just
until I have time to find a fitting license.

For short: Just do whatever you want, as long as the name is
the same.
