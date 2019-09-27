# C++ Boilerplate
[![Build Status](https://travis-ci.org/akupferb/enpm808x_tdd.svg?branch=master)](https://travis-ci.org/akupferb/enpm808x_tdd)
[![Coverage Status](https://coveralls.io/repos/github/akupferb/enpm808x_tdd/badge.svg?branch=master)](https://coveralls.io/github/akupferb/enpm808x_tdd?branch=master)
---
## Authors

* **Ari Kupferberg**  (akupferb) - Driver
* **Zuyang Cao**  (nuclearczy) - Navigator

## Overview
```
TDD Project build around a PID Controller, with focus on the compute() function for google testing.
```

## Notes:
Class design built with Stub functions. Added UML diagrams. Created Unit tests, checked to ensure they fail. Tested in Travis too? Part 1 complete?

## To Run:
```
git clone https://github.com/akupferb/enpm808x_tdd.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run test: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.


## Excess Below, to be removed:

## Plugins

- CppChEclipse

    To install and run cppcheck in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> cppcheclipse.
    Set cppcheck binary path to "/usr/bin/cppcheck".

    2. To run CPPCheck on a project, right click on the project name in the Project Explorer 
    and choose cppcheck -> Run cppcheck.


- Google C++ Sytle

    To include and use Google C++ Style formatter in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> Code Style -> Formatter. 
    Import [eclipse-cpp-google-style][reference-id-for-eclipse-cpp-google-style] and apply.

    2. To use Google C++ style formatter, right click on the source code or folder in 
    Project Explorer and choose Source -> Format

[reference-id-for-eclipse-cpp-google-style]: https://raw.githubusercontent.com/google/styleguide/gh-pages/eclipse-cpp-google-style.xml

- Git

    It is possible to manage version control through Eclipse and the git plugin, but it typically requires creating another project. If you're interested in this, try it out yourself and contact me on Canvas.
