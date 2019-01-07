// 010-TestCase.cpp

// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch2/catch.hpp"
#include "stringutils.hpp"

using namespace std;
using namespace stringutils;

TEST_CASE("split should split based on a single char") {
    string stringToParse = "uno,dos,tres,cuatro,cinco";
    vector<string> parsedString = split(stringToParse, ",");

    REQUIRE(parsedString.size() == 5);
    REQUIRE(parsedString[0] == "uno");
    REQUIRE(parsedString[1] == "dos");
    REQUIRE(parsedString[2] == "tres");
    REQUIRE(parsedString[3] == "cuatro");
    REQUIRE(parsedString[4] == "cinco");
}

TEST_CASE("split should split based on a string") {
    string stringToParse = "uno#!#dos#!#tres#!#cuatro#!#cinco";
    vector<string> parsedString = split(stringToParse, "#!#");


    REQUIRE(parsedString.size() == 5);
    REQUIRE(parsedString[0] == "uno");
    REQUIRE(parsedString[1] == "dos");
    REQUIRE(parsedString[2] == "tres");
    REQUIRE(parsedString[3] == "cuatro");
    REQUIRE(parsedString[4] == "cinco");
}
