# **manjaro-grayjack**

This is a personal repository with a mix of AUR packages that I use and packages of softwares that I made or modified the PKGBUILD

**Note: Only x86_64 packages**

GPG key:
```
08E5684B2E141A1DB87A8FD0B5FC3DA9495778D5
```
## Installation

* Edit `/etc/pacman.conf` and add these in the end of the file :
```
[manjaro-grayjack]
SigLevel = Optional
Server = https://raw.github.com/GrayJack/$repo/master/packages/
```
* Refresh pacman database (`-Syy`) and install `manjaro-grayjack-keyring` package
* Done!
