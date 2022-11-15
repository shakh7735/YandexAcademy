#include <iostream>
#include <vector>

int main() 
{
    int guestNumber;
    std::vector<int> guest;
    std::vector<int> mesto;
    int x;
    std::cin >> guestNumber;
    int i = 0;
    while (++i <= guestNumber) { 
        std::cin >> x;
        guest.push_back(x);
    }
    for (int j = 1; j != guestNumber + 1; ++j) 
    {
        for (i = 0; i < guestNumber; i++)
            if (guest[i] == j)
                break;        
        mesto.push_back(i + 1); 
    }
    for ( i = 0; i < guestNumber; i++)
        std::cout << mesto[i] << " ";    
    std::cout << std::endl;
}