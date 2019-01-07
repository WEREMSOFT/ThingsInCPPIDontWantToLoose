#pragma once

#include <iostream>
#include <string>
#include <vector>

#include <cstdlib>


namespace stringutils {

    std::vector<std::string> split(std::string stringToProcess, std::string token){
        std::vector<std::string> returnValue;

        auto tokenSize = token.size();

        auto position = stringToProcess.find(token);
        auto lastPosition  = 0;
        std::cout << "Position of the first token : " << position << std::endl;

        while(position != std::string::npos){
            if(lastPosition != position){
                returnValue.push_back(stringToProcess.substr(lastPosition, position - lastPosition));
            }
            lastPosition = position + tokenSize;
            position = stringToProcess.find(token, lastPosition);
        }
        returnValue.push_back(stringToProcess.substr(lastPosition, stringToProcess.size()));

        return returnValue;
    }

} // end stringutils namespace



