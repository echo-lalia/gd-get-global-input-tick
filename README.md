# gd-global-input-tick

A tiny GDExtension for Godot 4.5+ that provides access to the Windows GetLastInputInfo function, providing the tick the last input event happened globally (regardless of application focus).  
This can be used to detect global input activity/inactivity, without requiring complete global keylogging access, and without requiring the Godot program to be focused.

Currently, only supports **Windows**. I'm open to pull requests that implement this functionality for other platforms, but I have no intention of adding it myself.


## Usage
``` gdscript

## This is literally the whole thing.
## LastInputTick.get_last_input_tick() returns the result of Winddows GetLastInputInfo function, which is "the tick count when the last input event was received."
## The number changes when an input event occurs in any application.
var last_input_tick: int = LastInputTick.get_last_input_tick()

```



## Installation

### Method 1: Pre-built Releases (Recommended)

1. Go to the [Releases](https://github.com/echo-lalia/gd-get-global-input-tick/releases) page.
2. Download the latest release `.zip` archive.
3. Extract the contents directly into your Godot project's folder. It should create an `addons/gd-global-input/` structure.
4. Reload your Godot project. The extension will automatically load and be ready to use.

### Method 2: Building from Source

If you prefer to compile the extension yourself:

1. Clone this repository and initialize submodules:
   ```bash
   git clone https://github.com/echo-lalia/gd-get-global-input-tick
   cd gd-get-global-input-tick
   git submodule update --init --recursive
   ```

2. Make sure you have [SCons](https://scons.org/) and a modern C++ compiler (like MSVC on Windows) installed.

3. Compile the extension for your desired target:
   ```bash
   scons target=template_debug
   scons target=template_release
   ```
