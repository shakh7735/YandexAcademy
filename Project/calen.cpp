#include <iostream>

int main() {
    unsigned int n;
    unsigned int k;
    unsigned int a = 1;
    unsigned int i;
    
    std::cin >> n >> k;
    
    i = 0;
    while (++i < n)
            std::cout << "   ";
    while (i < 8 && a <= k)
    {
        if (i == 7 || a == k)
        {
            std::cout << (a < 10 ? " " : "") << a << "\n";
            i = 0;
        }
        else
            std::cout << (a < 10 ? " " : "") << a << " ";
        a++;
        i++;
    }
    return (0);
}