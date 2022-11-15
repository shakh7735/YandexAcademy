#include <iostream>
#include <cmath>

int main() 
{
    unsigned int m;
    unsigned int n;
    int k = 9;
    unsigned rez = 0;

    std::cin >> m;

        while (k >= 0)
        {
            n = m / pow(10,k);
            rez += n;
            if (n > 0)
                m -= n *  pow(10,k); 
            k--;
        }
        //izmeeneniya
    std::cout << (rez) << std::endl;
}