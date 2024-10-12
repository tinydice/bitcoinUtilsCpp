#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
#include <cstdint>

using std::string, std::array, std::find, std::distance;

uint16_t getWordIndex(std::vector<std::string> wordList, string targetWord) {
    auto foundIt = std::find(wordList.begin(), wordList.end(), targetWord);

    if (foundIt != wordList.end()) {
        return std::distance(wordList.begin(), foundIt);
    } else {
        return -1;
    }
}