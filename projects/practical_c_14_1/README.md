# countchars

A command line C application for counting characters in a text file.

Launch from terminal with:
```
$ ./countchars -f path_to_file
```
Example:
```
$ ./countchars -f readme.txt
```


## How to compile

The source code compiles with the meson build system and the ninja backend.
To compile and run enter the following commands at command prompt:
```
$ cd src         # move to src directory that contains the meson build script and source code
$ meson builddir # creates a build directory called builddir
$ cd builddir    # cd to build directory
$ ninja          # launch compilation backend
```
## How to run
From terminal or command prompt launch the executable found in builddir and set the -f parameter providing the full path of an actual text file, the program will print the total number of characters saved in the file. 
```
$ ./countchars -f path_to_file
```

