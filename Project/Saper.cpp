#include <iostream>
#include <vector>


int main() {
    size_t m, n, k;
    int im = 0, in = 0;
    int chm, chn;
    std::cin >> m >> n >> k;  // число строк и столбцов  
    // создаём матрицу matrix из m строк, каждая из которых — вектор из n нулей
    std::vector<std::vector<int>> matrix(100, std::vector<int>(100));

    
    for (size_t i = 0; i < k; i++)
    {
        std::cin >> im >> in;
        matrix[im - 1][in - 1] = 42;
        
        for (size_t j = 0; j < 9; j++)
        {
            chm = im - (int)(j / 3);
            chn = in - (int)(j % 3);
            if (chm >= 0 && chn >= 0 && chn < n && chm < m && matrix[chm][chn] != 42)
              matrix[chm][chn]++;  
        }
    }
    
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matrix[i][j] == 42)
                std::cout << "*";
            else
                std::cout << matrix[i][j];
            if (j != n - 1)
                std::cout << " ";
        }
        std::cout << "\n";        
    }
    return (0);
}