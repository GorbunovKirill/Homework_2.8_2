#pragma once
#include <iostream>


class Exception : public std::domain_error {
public:

    Exception(const std::string& message);


    const char* what() const  override;

};
