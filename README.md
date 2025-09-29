# LVGL 9 Start Project for Windows Display Emulation

This project demonstrates how to run LVGL v9 with SDL2 on Windows using MSYS2 MINGW64. It emulates a display window and supports mouse input for GUI interaction.

### 1. Install MSYS2

Download and install from [https://www.msys2.org](https://www.msys2.org). Use the **MSYS2 MINGW64 shell** for all steps below.

### 2. Install dependencies

```bash
pacman -S \
  mingw-w64-x86_64-gcc \
  mingw-w64-x86_64-cmake \
  mingw-w64-x86_64-ninja \
  mingw-w64-x86_64-SDL2 \
  mingw-w64-x86_64-SDL2_image \
  mingw-w64-x86_64-SDL2_ttf
```
### 3. Add to Windows PATH (optional but recommended)
To run the compiled  outside MSYS2, add these to your system PATH:
  - C:\msys64mingw64\bin
  - C:\msys64\usr\bin

⚠️ You do not need to add  or  folders to PATH — they are used by the compiler, not at runtime.

### 4. Clone the repository with LVGL submodule
```bash
git clone --recurse-submodules https://github.com/zerberus666/LVGL9_Start_project.git
```

- to launch .exe outside Msys2 - SDL2.dll should be available through PATH or next to the binary
