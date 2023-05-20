#include "exception.h"


Exception::Exception(const std::string& message):std::domain_error(message)  {};

const char* Exception::what() const  {
    
    
    return std::domain_error::what();

};

