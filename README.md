# **manjaro-grayjack**

This is a personal repository with a mix of AUR packages that I use and packages of softwares that I made or modified the PKGBUILD

**Note: Only x86_64 packages**

GPG key:
```
E0708F67A2C739A11AF06B957AA5AD4B91D622A6
```
## Installation

* Edit `/etc/pacman.conf` and add these in the end of the file :
```
[manjaro-grayjack]
SigLevel = Optional
Server = https://raw.githubusercontent.com/GrayJack/$repo/master/packages/
```
* Refresh pacman database (`-Syy`) and install `manjaro-grayjack-keyring` package
* Done!
