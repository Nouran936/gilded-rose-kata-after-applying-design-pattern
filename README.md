# C++ version of Gilded Rose refactoring kata

## Gilded Rose Requirements Specification

Hi and welcome to team Gilded Rose. As you know, we are a small inn with a prime location in a
prominent city ran by a friendly innkeeper named Allison. We also buy and sell only the finest goods.
Unfortunately, our goods are constantly degrading in quality as they approach their sell by date. We
have a system in place that updates our inventory for us. It was developed by a no-nonsense type named
Leeroy, who has moved on to new adventures. Your task is to add the new feature to our system so that
we can begin selling a new category of items. First an introduction to our system:

	- All items have a SellIn value which denotes the number of days we have to sell the item
	- All items have a Quality value which denotes how valuable the item is
	- At the end of each day our system lowers both values for every item

Pretty simple, right? Well this is where it gets interesting:

	- Once the sell by date has passed, Quality degrades twice as fast
	- The Quality of an item is never negative
	- "Aged Brie" actually increases in Quality the older it gets
	- The Quality of an item is never more than 50
	- "Sulfuras", being a legendary item, never has to be sold or decreases in Quality
	- "Backstage passes", like aged brie, increases in Quality as its SellIn value approaches;
	   quality increases by 2 when there are 10 days or less and by 3 when there are 5 days or less but
	   quality drops to 0 after the concert

We have recently signed a supplier of conjured items. This requires an update to our system:

	- "Conjured" items degrade in Quality twice as fast as normal items

Feel free to make any changes to the UpdateQuality method and add any new code as long as everything
still works correctly. However, do not alter the Item class or Items property as those belong to the
goblin in the corner who will insta-rage and one-shot you as he doesn't believe in shared code
ownership (you can make the UpdateQuality method and Items property static if you like, we'll cover
for you).

Just for clarification, an item can never have its Quality increase above 50, however "Sulfuras" is a
legendary item and as such its Quality is 80 and it never alters.

## C++ Build Guide
The C++ version of the Gilded Rose refactoring kata is available in four variants using different test frameworks:

* Catch2 test framework
  1. Traditional unit test with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `test/cpp_catch2_unittest` folder.
  2. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Catch2](https://github.com/catchorg/Catch2) test framework in the `test/cpp_catch2_approvaltest` folder.
* Google Test framework
  1. Traditional unit test with the [Googletest](https://github.com/google/googletest) test framework in the `test/cpp_googletest_unittest` folder.
  2. [Approval tests](https://github.com/approvals/ApprovalTests.cpp) with the [Googletest](https://github.com/google/googletest) test framework in the `test/cpp_googletest_approvaltest` folder.

The `GildedRose.cc` file, i.e. the code under test, is identical in all four variants.

## Prerequisites

* CMake version >= 3.13
* C++ compiler that support C++11

## How to build and run tests in a terminal

### Build tests

    $ cd ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp
    $ mkdir build
    $ cd build
    $ cmake ..
    $ cmake --build .

### Show available tests

    $ cd ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/build
    $ ctest -N
    Test project ${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp/build
      Test #1: GildedRoseCatch2ApprovalTests
      Test #2: GildedRoseCatch2UnitTests
      Test #3: GildedRoseGoogletestApprovalTests
      Test #4: GildedRoseGoogletestUnitTests

### Run all tests

    $ ctest

### Run all tests with verbose output

    $ ctest -VV

### Run a specific test with verbose output

    $ ctest -VV --tests-regex Catch2Approval

## How to build and run tests using the [CLion IDE](https://www.jetbrains.com/clion/)

1. Start CLion
2. Select menu `File - Open...`
3. Select folder `${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp`
4. Select menu `Build - Build Project`
4. Select menu `Run - Run...`
4. Select what test variant to run, e.g. `GildedRoseCatch2ApprovalTests`.

## How to build and run tests using Visual Studio 2019 

1. Start Visual Studio 2019
2. Select `Open a local folder`
3. Select folder `${GIT_FOLDER}/GildedRose-Refactoring-Kata/cpp`
4. Wait for message `CMake generation finished.` in the CMake output window at the bottom
5. Select what test variant to run in the drop down menu for Startup Items, e.g. `GildedRoseCatch2ApprovalTests.exe`.
6. Select menu `Debug - Start`
