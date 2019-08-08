# cpp-project-template

[![Build Status](https://travis-ci.org/Bo-Yuan-Huang/cpp-starter.svg?branch=master)](https://travis-ci.org/Bo-Yuan-Huang/cpp-starter)
[![Coverage Status](https://coveralls.io/repos/github/Bo-Yuan-Huang/cpp-project-template/badge.svg?branch=master)](https://coveralls.io/github/Bo-Yuan-Huang/cpp-project-template?branch=master)
[![Coverity Scan Build Status](https://img.shields.io/coverity/scan/14479.svg)](https://scan.coverity.com/projects/bo-yuan-huang-cpp-project-template)
[![Project Status: Active – The project has reached a stable, usable state and is being actively developed.](http://www.repostatus.org/badges/latest/active.svg)](http://www.repostatus.org/#active)
[![license](https://img.shields.io/github/license/mashape/apistatus.svg)](https://github.com/Bo-Yuan-Huang/cpp-project-template/blob/master/LICENCE)


This is a starting template for C++ projects that supports:

- Hierarchical sources and headers 
- Access to [Google Tests](https://github.com/google/googletest)
- Use of [CMake](https://cmake.org/) for much easier compiling
- Code documentation with [Doxygen](http://www.stack.nl/~dimitri/doxygen/)
- Continuous testing with [Travis-CI](https://travis-ci.org/)
- Code coverage with [Coveralls.io](https://coveralls.io/)
- Static analysis with [Coverity Sacn](https://scan.coverity.com)

## Structure
```
.
├── CMakeLists.txt
├── app
│   └── main.cpp
├── include
│   ├── example.h
│   └── exampleConfig.h.in
├── src
│   └── example.cpp
└── tests
    ├── dummy.cpp
    └── main.cpp
```

Sources go in [src/](src/), header files in [include/](include/), main programs in [app/](app), and
tests go in [tests/](tests/) (compiled to `unit_tests.x` by default). 

If you add a new executable, say `app/hello.cpp`, you only need to add the following three lines to [CMakeLists.txt](CMakeLists.txt): 

``` cmake
add_executable(hello.x app/hello.cpp)   # Name of exec. and location of file.
add_dependencies(hello.x engine)        # engine is the library built from src/*.cpp
target_link_libraries(hello.x engine)   # Link the executable to the 'engine'.
```

You can find the example that builds the example in [app/main.cpp](app/main.cpp) under the `Build` section in [CMakeLists.txt](CMakeLists.txt). 
If the executable you made does not use the library in [src/](src), then only the first line is needed.



## Building

Build by making a build directory (i.e. `build/`), run `cmake` in that dir, and then use `make` to build the desired target.

Example:

``` bash
$ mkdir build && cd build
$ cmake .. # argument is location of CMakelists.txt
$ make
$ make gtest
$ ./main.x
```

## .gitignore

The [.gitignore](.gitignore) file is a copy of the [Github C++.gitignore file](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore),
with the addition of ignoring the build directory (`build/`).


## Services

If repository is activated with Travis-CI, then unit tests will be built and executed on each commit.

If repository is activated with Coveralls, then deployment to Travis will also calculate code coverage and
upload this to Coveralls.io. 

If repository is activated with Coverity-Scan, then source commited will be uploaded to Coverity Scan for static analysis.


## Acknowledgement 
This template is extended based on [cpp-project](https://github.com/bsamseth/cpp-project). 

