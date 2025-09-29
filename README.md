# LVGL 9 Start Project for Windows display emulation

1. Install MSYS2
2. Install dependencies in MSYS2 MINGW64:
  ```
  pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake mingw-w64-x86_64-ninja mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_image mingw-w64-x86_64-SDL2_ttf
  ```
3. Add to Windows path variable:
   - C:\msys64\mingw64\bin
   - C:\msys64\usr\bin
   - C:\msys64\mingw64\include
   - C:\msys64\mingw64\lib
4. Clone the repository to the local PC: `git clone --recurse-submodules https://github.com/zerberus666/LVGL9_Start_project.git`
