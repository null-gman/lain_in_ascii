# lain_in_ascii
A CLI program that echo the Lain character as ASCII art for GNU/Linux systems.
> Fun Fact: Use the cat utility rather than this nonsense.
# Usage
- `$ lain_in_ascii [opthions]`
- Opthions flags :
  - `-ascii_path <ascii file path>` , the defult is `/etc/lain_in_ascii/lain.asc` file even if not exist .
# Installation & Compilation
## Prerequisites
- make
- gcc (or any C compiler)
- sudo permission
## Compilation
- `$ make compile` , will compile the main.c to the executable `lain_in_ascii` in the current working directory , howerver the program will not function as the file `/etc/lain_in_ascii/lain.asc` is not found .
## Installation
The installation process will start by compiling the program in the current working directory, then copying (cp) `lain.asc(ASCII art file)` to `/etc/lain_in_ascii/lain.asc`, then cp the executable `lain_in_ascii` file to `/usr/bin/lain_in_ascii`. Command:
- `$ sudo make install`
## Uninstall
- `$ sudo make uninstall` , will remove `/etc/lain_in_ascii/lain.asc` and `/usr/bin/lain_in_ascii`.
## Reinstall
- `$ sudo make reinstall` , will `make uninstall` than `make install` .

# copyleft
⠀⠀⠀⠀⠀⠀⠀⢠⣤⣄⣀⣠⣤⣶⣿⣯⣿⣽⣾⣷⣶⣶⡦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣿⣟⣯⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣟⣦⣄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣾⡷⣄⠀⠀⠀⠀⠀
⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣾⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣳⡀⠀⠀⠀
⠀⠀⢠⣿⣿⣽⣿⢿⣿⣿⣿⣿⡿⣿⣿⣿⣿⢿⡿⣽⣿⣿⡿⣿⣿⣏⣿⣿⣿⣟⣿⣳⡄⠀⠀
⠀⠀⣾⣿⣿⣽⣾⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⢿⣿⣾⢿⣷⡿⣿⣿⣷⢿⣿⣿⣷⡿⣷⠀⠀
⠀⢸⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣳⣿⣟⣿⣿⣿⣻⣽⣿⣿⡽⡇⠀
⠀⡿⣿⣿⣿⣿⣾⣿⣿⣿⣿⢿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⡀
⢸⣿⣿⣿⣿⣿⣿⣿⣏⠀⠈⠀⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⢿⡇
⢨⣿⣿⣿⣿⣽⣿⣿⣇⣀⡤⠤⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⠎⠀
⢰⣿⡿⣿⣿⣿⣿⣿⠃⠀⠀⠐⠃⠘⠙⢹⠿⡘⣿⠟⠉⢹⡂⠿⡞⣿⣿⣿⣿⣿⣿⣿⣿⠂⠀
⠀⣿⣿⣿⣿⣿⣿⡞⠅⣀⣀⣀⣀⠉⠓⠚⠀⠁⡏⠀⢛⠋⢀⣀⣀⣋⠸⣿⣿⣿⣿⣿⣿⠃⠀
⠀⣷⣟⣿⣿⣿⣿⣆⠠⡟⣿⣿⣿⡿⠦⠀⠀⠀⠀⠀⠠⢿⣿⣿⣿⠻⢇⣿⣿⣿⣿⣿⣿⠀⠀
⠀⠈⢸⣻⣿⣿⣿⢯⡃⢀⠹⣿⡿⠗⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⠏⣈⠈⣿⣿⣿⣿⣿⣿⠀⠀
⠀⠀⠈⣿⣿⣿⣿⣇⡗⠈⠉⠉⠉⠉⠀⠀⢐⡀⠀⠀⠀⠈⠉⠉⠉⠑⢸⣸⣿⡟⣿⣿⡟⠀⠀
⠀⠀⠀⢻⣿⣽⣿⡏⢿⡆⠀⠀⠀⠀⠀⠀⠸⢆⡄⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⡿⠇⠀⠀
⠀⠀⠀⠈⠿⣿⢿⡇⠀⠙⢦⡀⠀⠀⠀⠐⠲⠤⠔⠂⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⣿⡟⠀⠀⠀
⠀⠀⠀⠀⠀⠘⣿⣇⠀⠀⠀⠙⠢⣄⡀⠀⠀⠀⠀⣀⣐⣺⣵⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠙⠋⠀⠀⠀⠀⠀⢹⢨⠑⠲⠤⠞⠋⠉⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠈⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⣀⣠⢤⡠⠒⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀
⠀⠀⣠⠔⠒⠉⠁⠀⠀⠘⠶⣲⠄⠀⠀⠈⠀⠀⠀⢠⢀⠀⠀⣀⠤⢻⣿⣿⣿⡏⠐⠲⣄⠀⠀
⠀⢰⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠓⠒⠚⢕⡀⠀⠀⣠⠖⠒⠚⠁⠀⢾⣿⣿⣿⡁⠀⠀⠨⡆⠀
⠀⢸⠀⠀⠀⠒⠒⠒⠒⠒⠂⠀⠐⠚⠑⠆⠀⠀⠒⠓⠀⠀⠀⠀⠀⣿⣿⣿⣿⡆⠀⠀⠀⣇⠀
⠀⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠁⠀
⠀⢦⠀⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀

# ToDO
- Add ASCII colours for the logs.
