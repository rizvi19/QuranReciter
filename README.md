# Quran Reciter Selector

A simple C++ console application designed to demonstrate the **Factory Method design pattern**. This project, created for CSE 3206 coursework, simulates a Quran listening app where a user can select different reciters (Qaris), each with a unique recitation style.

The application uses specific "Factory" classes to create "Reciter" objects, decoupling the client code from the concrete implementation of the objects it needs to create.

- **Main Language:** C++ (C++17)
- **Build System:** CMake
- **Testing Framework:** Google Test (GTest)

---

## Features

-   **Factory Method Pattern:** A clear and practical implementation of the creational design pattern.
-   **Polymorphism:** Uses abstract base classes and virtual functions to handle different types of reciters.
-   **Modern C++:** Leverages features like smart pointers (`std::unique_ptr`) for automatic memory management.
-   **Unit Tested:** Includes a suite of unit tests written with Google Test to verify the functionality of factories and products.
-   **Cross-Platform Build:** Uses CMake for a consistent build experience across different operating systems (Linux, macOS, Windows).

---

## Project Structure

The project is organized into the following directories:

```
.
├── include/              # Header files for all classes (.h)
├── src/                  # Source code for the main application (.cpp)
├── tests/                # Unit test files
└── CMakeLists.txt        # Build instructions for CMake
```

---

## How to Build and Run

Follow these steps to clone, build, and run the project on your local machine.

### Prerequisites

Make sure you have the following tools installed:

-   [Git](https://git-scm.com/)
-   A C++ Compiler (e.g., GCC, Clang, or MSVC)
-   [CMake](https://cmake.org/download/) (version 3.14 or higher is recommended)

### Step-by-Step Instructions

1.  **Clone the Repository**
    Open your terminal or command prompt and clone the project from GitHub.
    ```bash
    git clone <YOUR_GITHUB_REPOSITORY_URL>
    cd <YOUR_PROJECT_DIRECTORY>
    ```

2.  **Create a Build Directory**
    It's good practice to build the project in a separate directory.
    ```bash
    mkdir build
    cd build
    ```

3.  **Configure with CMake**
    Run CMake to configure the project and generate the build files. This will also automatically fetch the Google Test library.
    ```bash
    cmake ..
    ```

4.  **Compile the Project**
    Build the application and the tests using the build command.
    ```bash
    cmake --build .
    ```
    *(Alternatively, on Linux/macOS, you can simply run `make`)*

5.  **Run the Application**
    Execute the main application.
    ```bash
    ./QuranReciterApp
    ```
    *(On Windows, you would run `QuranReciterApp.exe`)*

    You should see an output like this:
    ```
    Quran Reciter Selector App (Factory Method Demo) 

    Client: Selecting reciter - Sheikh Mishary Rashid Alafasy.
    Reciting Surah Al-Fatiha, Ayah 1 - Style: Mishary Rashid Alafasy (Clear, Melodious Articulation).
    -------------------------------------------------------------
    Client: Selecting reciter - Sheikh Saad Al-Ghamdi.
    Reciting Surah Al-Fatiha, Ayah 1 - Style: Saad Al-Ghamdi (Smooth, Emotive Flow).
    -------------------------------------------------------------
    Client: Selecting reciter - Sheikh Abdul Rahman Al-Sudais.
    Reciting Surah Al-Fatiha, Ayah 1 - Style: Abdul Rahman Al-Sudais (Authoritative, Reverberant Delivery).
    -------------------------------------------------------------
    ```

6.  **Run the Unit Tests**
    Execute the test runner to verify that all components are working as expected.
    ```bash
    ./RunReciterTests
    ```
    *(On Windows, run `RunReciterTests.exe`)*

    A successful test run will show an output where all tests pass:
    ```
    [==========] Running 5 tests from 2 test suites.
    [----------] Global test environment set-up.
    [----------] 4 tests from ReciterFactoryTest
    [ RUN      ] ReciterFactoryTest.MisharyFactoryCreatesMisharyReciter
    [       OK ] ReciterFactoryTest.MisharyFactoryCreatesMisharyReciter (0 ms)
    ...
    [  PASSED  ] 5 tests.
    ```

---

## 📝 Design Pattern Note: Factory Method

The Factory Method pattern defines an interface for creating an object but lets subclasses alter the type of objects that will be created.

-   **`Reciter` (Abstract Product):** The interface for the objects we want to create (our reciters).
-   **`MisharyAlafasyReciter`, etc. (Concrete Products):** The actual objects being created.
-   **`ReciterFactory` (Abstract Creator):** The interface that declares the factory method `createReciter()`.
-   **`MisharyAlafasyFactory`, etc. (Concrete Creators):** The subclasses that implement the factory method to produce a specific, concrete reciter object.

This pattern allows us to introduce new reciters without changing the client code that uses them. We just need to create a new `Reciter` class and a corresponding `Factory` class.
