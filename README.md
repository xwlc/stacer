<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/header.png" width="800">    
</p>

<h2 align="center">Linux System Optimizer and Monitoring</h2>

<p align="center">
	<a href="https://www.kernel.org">
		<img alt="Platform (GNU/Linux)" src="https://img.shields.io/badge/platform-GNU/Linux-blue.svg"/>
	</a>
	<a href="https://github.com/Quentium-Forks/Stacer/releases">
		<img alt="Github All Releases" src="https://img.shields.io/github/downloads/Quentium-Forks/Stacer/total.svg"/>
	</a>
</p>

## Reviews

<p align="left">
    <a href="https://www.omgubuntu.co.uk/2017/01/stacer-system-optimizer-for-ubuntu">
		<img width="64px" src="https://149366088.v2.pressablecdn.com/wp-content/themes/omgubuntu-theme-2022_04_0/images/favicons/favicon-192x192.png"/>
	</a>        
    <a href="https://diolinux.com.br/sistemas-operacionais/ubuntu/stacer-um-programa-para-otimizar-o-ubuntu.html">
		<img width="64px" src="https://u5h3z3d7.stackpathcdn.com/wp-content/uploads/2021/05/diolinux-logo.png"/>
	</a>    
    <a href="https://www.dobreprogramy.pl/stacer-program-do-optymalizacji-ubuntu-ktory-wyglada-jakby-uciekl-z-windowsa,6628400543275137a">
		<img width="64px" src="https://www.dobreprogramy.pl/icon.png"/>
	</a>
    <a href="https://desdelinux.net/optimizar-debian-ubuntu-linux-mint-derivados-stacer/">
		<img width="64px" src="https://blog.desdelinux.net/wp-content/uploads/2018/04/cropped-desdelinux.png"/>
	</a>
	<a href="https://www.techrepublic.com/article/how-to-install-stacer-for-quick-linux-system-optimization/">
		<img width="64px" src="https://www.techrepublic.com/wp-content/themes/techrepublic/inc/images/app-icons/android-chrome-256x256.png"/>
	</a>
</p>

### Required Packages

-   curl
-   systemd

### Ubuntu PPA Repository

1. Run `sudo add-apt-repository ppa:quentiumyt/stacer`
2. Run `sudo apt-get update`
3. Run `sudo apt-get install stacer`

### Debian / Ubuntu

1. Download the stacer binary from the [Stacer releases page](https://github.com/Quentium-Forks/Stacer/releases).
2. Run `sudo dpkg -i stacer_*.deb` on the downloaded package.
3. Launch Stacer using the installed `stacer` command.

### Debian / Ubuntu (with APT)

1. Run `sudo apt-get install stacer`
2. Launch Stacer using the installed `stacer` command.

### Fedora

1. Download the stacer binary from the [Stacer releases page](https://github.com/Quentium-Forks/Stacer/releases).
2. Run `sudo rpm --install stacer_*.rpm --nodeps --force` on the downloaded package.
3. Launch Stacer using the installed `stacer` command.

### Fedora (with DNF)

1. Run `sudo dnf install stacer`
2. Launch Stacer using the installed `stacer` command.

### Arch Linux (with AUR)

Select the AUR helper of your choice:

1. Run `yay -Syu stacer`
1. Run `paru -S stacer`
1. Run `pacaur -a stacer`
2. Launch Stacer using the installed `stacer` command.

## Build from source with CMake (Qt Version Qt 5.x)

Qt5 repo:

1. Run `sudo add-apt-repository ppa:beineri/opt-qt-5.15.4-focal`
2. Run `sudo apt-get update`

Dependencies:

-   cmake
-   qt515base
-   qt515imageformats
-   qt515svg
-   qt515charts-no-lgpl
-   qt515tools

1. `mkdir build && cd build`
2. `cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/opt/qt515/ ..`
3. `make -j $(nproc)`
4. `output/bin/stacer`

## Screenshots

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-1.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-2.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-3.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-4.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-5.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-6.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-7.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-8.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-9.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-10.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-11.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-12.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-13.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-14.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-15.png" width="700">
</p>

<p align="center">
    <img src="https://raw.githubusercontent.com/Quentium-Forks/Stacer/main/screenshots/Screenshot-1.0.9-16.png" width="700">
</p>

## Contributors

This project exists thanks to all the people who contribute.

<a href="https://github.com/Quentium-Forks/Stacer/graphs/contributors"><img src="https://opencollective.com/Stacer/contributors.svg?width=890&button=false" /></a>
