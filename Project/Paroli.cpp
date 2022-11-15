#include <iostream>
#include <string>

int ft_isdigit(char ch)
{
    if (ch >= 48 && ch <= 57)
        return (1);
    return (0);
}

int ft_islower(char ch)
{
    if (ch >= 97 && ch <= 122)
        return (1);
    return (0);
}

int ft_isupper(char ch)
{
    if (ch >= 65 && ch <= 90)
        return (1);
    return (0);
}

int ft_isprint(char ch)
{
    if (ch >= 33 && ch <= 126)
        return (1);
    return (0);
}

int ft_isznak(char ch)
{
    if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64)
        || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
        return (1);
    return (0);
}

int main() 
{
    std::string line;
    int uper = 0, lower = 0, digit = 0, znak = 0;
    bool otvet = true;

    std::cin >> line;

    for (size_t i = 0; i < line.size(); i++)
    {
       if (!ft_isprint(line[i]) || line.size() < 8 || line.size() > 14)
        {
            otvet = false;
            break;
        }
        digit = ft_isdigit(line[i]) ? 1 : digit;
        lower = ft_islower(line[i]) ? 1 : lower;
        uper = ft_isupper(line[i]) ? 1 : uper;
        znak = ft_isznak(line[i]) ? 1 : znak;
    }
        otvet = digit + lower + uper + znak > 2;

    std::cout << (otvet?"YES":"NO") << std::endl;
}