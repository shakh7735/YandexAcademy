#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words;
    std::string word;

    words.reserve(1000);
    while (std::getline(std::cin, word)) {
        words.push_back(word);
    }
    word = words[0];
    size_t n = 0;
    while (++n < words.size())
    {
        word = words[n -1];
        if (words[n -1].compare (words[n]) < 0)
        {
            words[n -1] = words[n];
            words[n] = word;
            n = 0;
        }
    }
    for (size_t j = 0; j != words.size(); ++j)
        std::cout << words[j] << std::endl;
    return (0);
}