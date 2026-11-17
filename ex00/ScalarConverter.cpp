#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <cctype>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
    return (*this);
}

void ScalarConverter::convert(std::string str)
{
    std::string array[4] = {"char: ", "int: ", "float: ", "double: "};
    std::ostringstream s;

    if (!str.empty())
    {
        if (str.length() == 1)
        {
            char c = str[0];
            if (isdigit(c))
            {
                array[0].append("Non displayable");
                array[1] += static_cast<int>(c);
            }
            if (isascii(c) && !isprint(c))
            {
                array[0].append("Non displayable");
                s << static_cast<int>(c);
                array[1] += s.str();
            }
            if (isascii(c) && !isdigit(c) && isprint(c))
            {
                    array[0] += c;
                    s << static_cast<int>(c);
                    array[1] += s.str();
            }
        }
    }
    for (int i = 0; i < 4; i++)
        std::cout << array[i] << std::endl;
}