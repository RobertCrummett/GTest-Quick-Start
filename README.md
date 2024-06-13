## About GTest-Quick-Start
This is a brief example of how to download [GoogleTest](https://google.github.io/googletest/) using [Conan](https://conan.io/). The `CMakeLists.txt` file is a nice example of how to keep unit testing and application code separate.

## Instructions
First you must set up a Conan profile for your hardware. If you want Conan to figure this out for you (easiest), simply run
```
conan profile detect --force
```
Now we are ready to start using Conan. \
**Note** \
I used some C++23 syntactic sugar in `factorial_test.cpp`, so make sure your Conan profile is current. Check your current Conan profile with
```
conan profile show
```
and look for the `compiler.cppstd` setting. If you do not have an earlier C++ standard enabled, at install time, run
```
conan install . --build=missing -s compiler.cppstd=23
```
to manually override. Another option is to go directly to the profile location (`conan profile path default`) and modify the `compiler.cppstd` variable.

1.  From the repository, run
```
conan install . --build=missing
```
or
```
conan install . --build=missing -s compiler.cppstd=23
```
as noted above.

This checks for binaries on your system and in the Conan remote that match your profile - if these are not found (`missing`), then the packages will be built from source This should automatically output binary files to a new `build/Release` folder. The output directory and build type can both be specified manually.

2.  Next, to set up the project (cmake version >= 3.23), run 
```
cmake --preset conan-release
```
This builds the directory structure, and so long as the Conan settings do not change, does not need to be rerun each time you would like to recompile. The build instructions are output to the `./build/Release` folder.

3. To finally build the executable, run
```
cmake --build ./build/Release
```
and on build systems supporting multiple configurations (e.g. MSVC), specify the configuration at build time like
```
cmake --build ./build/Release --config Release
```
The `run.exe` and `test.exe` executables are now in the `./build/Release` directory!
