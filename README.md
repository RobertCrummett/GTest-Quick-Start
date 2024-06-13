## About GTest-Quick-Start
This is a brief example of how to download [GoogleTest](https://google.github.io/googletest/) using [Conan](https://conan.io/). The `CMakeLists.txt` file is a nice example of how to keep unit testing and application code separate.

**Note** \
I used some C++23 syntactic sugar in `factorial_test.cpp`, so make sure your Conan profile is current. Check your current Conan profile with
```
conan profile show
```
and look for the `compiler.cppstd` setting. If you do not have and earlier C++ standard enabled, at install time, run
```
conan install . --build=missing -s compiler.cppstd=23
```
to manually override. Another option is to go directly to the profile location (`conan profile path default`) and modify the `compiler.cppstd` variable.
