# Vscode Cpp Template

A basic template for multi-file C++ programming with Catch2 support.

## Dependencies

For any of this to work you will need to install:

-   g++
-   gdb
-   cmake

Under Ubuntu and WSL you can do it using this command:

```bash
sudo apt install g++ gdb cmake
```

Under macOS you will have to install [Homebrew](https://brew.sh/) and then use:

```bash
brew install gcc gdb cmake
```

## Recommended extensions

-   [C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)
-   [C++ TestMate](https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter)

## Code creation

-   the `src` folder contains all of your `.cpp` and `.h` files
-   the `main.cpp` is the main file that controls the execution of the application
-   the `tests.cpp` file contains all of unit tests created using the [Catch2](https://catch2.docsforge.com/) framework

### Folders inside `src`

Each folder in the `src` folder corresponds to a single class or part of the program and should contain a `.cpp` and `.h` file with the same name.

The basic shape of the `.cpp` file for a class called `SomeClass` would look like this:

```cpp
#include "SomeClass.h"

// all of the necessary includes
#include <important_library>
#include <sorting_library>

void SomeClass::some_method1(int arg) {
    // ...
}

ImportantType SomeClass::some_method2(double arg) {
    // ...
}
```

And this is what a `.h` file would look like

```cpp
#pragma once

// only the includes that are necessary for type declarations
// (the sorting_library has been omitted)
#include <important_library>

class SomeClass {
public:
    void some_method1(int arg);
    ImportantType some_method2(double arg);
};
```

If you wanted to use `SomeClass` inside `main.cpp` you would include it with:

```cpp
#include "SomeClass/SomeClass.h"
```

If you wanted to use it in a different class, then you would include it with:

```cpp
#include "../SomeClass/SomeClass.h"
```

You can see this implemented inside the example `Square` and `Stack` folders

## Compilation, execution and testing

### Preparations

When you open a folder using this template for the first time you will need to configure CMake.

To do that, open the Command Palette (<kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>P</kbd>on Windows).

Then type `CMake: Configure` and press enter. You will be asked to select a compiler. Select the newest version of gcc that is proposed.

After that, many new icons will appear on the bottom of your toolbar. This means you have successfuly configured your workspace.

### Compilation

To compile your project, simply press the Build button on your toolbar (it has a gear icon).

### Execution

To compile and run your program, press the play button on your toolbar and then select "main" from a dropdown that appears.

### Testing

To run unit tests, first press the Build button to compile your project and then press the run tests button in the Testing sidebar.

### Debugging

To run your code in debug mode, press the bug-shaped button on your toolbar. On macOS you might be asked to give special debugging permissions.

# Issues

I hope that this helps you with your setup.

However, this setup might not be perfect, so if you see any room for improvements, please suggest them in an issue.

Have fun coding! :D
