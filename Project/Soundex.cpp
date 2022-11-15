#include <iostream>
#include <string>

char checkSimbol(char ch)
{
    if (ch == 'b' || ch == 'f' || ch == 'p' || ch == 'v')
        return ('1');
    if (ch == 'c' || ch == 'g' || ch == 'j' || ch == 'k' || ch == 'q' || ch == 's' || ch == 'x' || ch == 'z')
        return ('2');
    if (ch == 'd' || ch == 't')
        return ('3');
    if (ch == 'l' )
        return ('4');
    if (ch == 'm' || ch == 'n')
        return ('5');
    if (ch == 'r' )
        return ('6');
    return ('0');
}

std::string checkDigit(std::string str)
{
    char c;
    std::string newStr;

    c = str[0];
    newStr += c;
    for (size_t i = 1; i < str.size(); i++)
    {
        if (c != str[i])
            newStr += str[i];
        c = str[i];
    }
    if (newStr.size() > 4)
        newStr.resize(4);
    while (newStr.size() < 4)
        newStr += '0';  
    return (newStr);
}

int main()
{
    std::string line;
    std::string rez;
    char c;

    std::cin >> line;
    rez = line[0];
    for (size_t i = 1; i < line.size(); i++)
    {
        c = checkSimbol(line[i]);
        if (c != '0')
        rez += c;
    }
    rez = checkDigit(rez);
    std::cout << rez << std::endl;
    return (0);
}