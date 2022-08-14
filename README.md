# ExamplePlugin-SKSE64
Basic plugin template for use with SKSE64

If you got here through Google, please see the [tutorial](https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki)

## End User Dependencies
* [SKSE64](https://skse.silverlock.org/)
* [Address Library for SKSE Plugins](https://www.nexusmods.com/skyrimspecialedition/mods/32444)

## Build Dependencies
* [CommonLibSSE NG](https://github.com/CharmedBaryon/CommonLibSSE-NG) 
  - easier for se/ae builds in one dll (could be used from an environment variable as well, `CMakeLists.txt` will need adjustment for that)
* [spdlog](https://github.com/gabime/spdlog) 
  - for logging
* [simpleini](https://github.com/brofield/simpleini) 
  - reading/writing to ini files
  - other options for settings
    - toml settings [tomlplusplus](https://github.com/marzer/tomlplusplus) or [autotoml](https://github.com/Ryan-rsm-McKenzie/AutoTOML)
    - json settings [nlohmann-json](https://github.com/nlohmann/json) or [json2settings](https://github.com/Ryan-rsm-McKenzie/Json2Settings)
* [vcpkg](https://github.com/microsoft/vcpkg) 
  - Add the environment variable `VCPKG_ROOT` with the value as the path to the folder containing vcpkg
* [cmake](https://cmake.org) 
  - installed dir needs to be added to the `PATH` environment variable

## Developing
* [Visual Studio](https://visualstudio.microsoft.com/)
* [Rider](https://www.jetbrains.com/rider/)
* update `.clang-format` file to your likeing for example from [here](https://zed0.co.uk/clang-format-configurator/)
* set `cmake/Version.h.in` variable `AUTHOR` with your name
* update version and name in `vcpkg.json` and `CMakeLists.txt` (under project) before building


## Building
* standard `cmd` works, I prefer [git-bash](https://gitforwindows.org/), [windows terminal](https://github.com/microsoft/terminal) is also an option
```
git clone https://github.com/mlthelama/ExamplePlugin-SKSE64.git
cd ExamplePlugin-SKSE64

cmake -B build -S .
python scripts/cmake_generate.py 
cmake --build build --config Release
```
* `cmake -B build -S .` will generate the sln file you will open with an ide
* `python scripts/cmake_generate.py` is used to generate `cmake/sourcelist.cmake` and includes all .h and .cpp files from `src/` and subdirectories
* `cmake --build build --config Release` will just build a dll (it is the same if you build it from rider or vs), `Debug` or `Release` are one of the accepted values
