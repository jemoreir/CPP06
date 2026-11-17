#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <string>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter&);
public:
    ScalarConverter& operator=(const ScalarConverter&);
    ~ScalarConverter();

    static void convert(std::string str);
};

#endif