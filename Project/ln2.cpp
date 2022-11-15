#include <iostream>

int main() 
{
    unsigned int m;
    int n = 1;
    unsigned int k = 1;
    double rez = 0;

    std::cin >> m;
        while (k <= m)
        {
            rez += 1.0/k * n;
            k++;
            n *= (-1);
        }
    std::cout << rez << std::endl;
}