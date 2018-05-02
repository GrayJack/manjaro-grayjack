# Manjaro-bootsplash-manjaro(lol)
Kernel Bootsplash theme for manjaro Linux using Manjaro logo.

This was based on https://github.com/Blacksuan19/Bootsplash-Themes

spinner.git base on circle wave by Dave Whyte on dribble.

# Installation:

- `git clone https://github.com/Blacksuan19/Bootsplash-Themes.git`
- `cd manjaro-bootsplash-green`
- run `bootsplash-manjaro-green.sh` to generate STL model.
- run `makepkg` to create Arch package and install it with `pacman -U $package_name`
- append `bootsplash-manjaro-green` hook in the end of HOOKS string of `/etc/mkinitcpio.conf`
- add `quiet bootsplash.bootfile=bootsplash-themes/manjaro-green/bootsplash` into `GRUB_CMDLINE_LINUX` string in `/etc/default/grub`
- run `sudo mkinitcpio -p linux415` (or linux416)
- run `sudo update-grub`
