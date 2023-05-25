##A Reference point for C++ Projects

###Build
Make a build directory and invoke the cmake command from the build directory.  
Run the `Makefile` generated from the `CMakeLists.txt` file.
```
mkdir build && cd build
cmake ..
make
```

###Vim Stuff
To format a file with `astyle`  
```
:%!astyle
```
TODO; make a vim keybinding for this or look at `clang-tidy`
