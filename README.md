# Functions I did for C++ and I don't want to loose #

## Split ##
This is similar to the string.split function in javascript(I like javascript a lot!).
It's usefull when you want to pharse some stirng, like a json or something.

*IMPORTANT!!:* I'm NOT for any mean an experienced C++ programmer. This code is probably slow and inapropiate. Use at your own risk.

If you want to see how it works, just compile and run the program. In main.cpp file there are unit tests that should show you how this works.

They should NOT fail.

## Example ##

I like examples, I don't want to look into the code and guess how to use the mother fuking funciton. So here you are, myself from the future!

```
    string stringToParse = "uno,dos,tres,cuatro,cinco";
    vector<string> parsedString = split(stringToParse, ",");
    // parsedStirng vector has now 5 strings: "uno", "dos", "tres", "cuatro" and "cinco"

```