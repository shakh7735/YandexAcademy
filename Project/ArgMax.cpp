#include <iostream>
#include <utility>
#include <vector>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int> >& matrix)
{
    std::pair<size_t, size_t> p;
    int max;
    size_t rows = matrix.size();
    size_t colm = matrix[0].size();
    if ( rows == 1 &&  colm== 1)
        return p;
    max = matrix[0][0];
    // std::cout << "rows=" << rows << "  colm=" << colm << std::endl;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < colm; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
                p.first = i;
                p.second = j;
            }
        }
    }
    return p;
}

int main() {
    
    std::pair<size_t, size_t> p;
    
    
    std::vector<std::vector<int> > matrix{std::vector<int>{1}}; // 1 1
    
    // std::vector<std::vector<int>> matrix   // 3 4  
    // {
    //     std::vector<int>{0, 3, 2, 4},
    //     std::vector<int>{2, 3, 5, 5},
    //     std::vector<int>{5, 1, 2, 3}
    // };

    // std::vector<std::vector<int>> matrix   // 3 5
    // {
    //     std::vector<int>{1, 2, 3, 4, 5},
    //     std::vector<int>{6, 7, 8, 9, 10},
    //     std::vector<int>{11, 12, 13, 14, 15}
    // };
    p = MatrixArgMax(matrix);
    std::cout << p.first << " " << p.second << std::endl;
    
    return 0;
    }