#include "bip39.h"
#include "wordlist.h"
#include "helpers.h"
#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <cstdint>

using std::array, std::string;

typedef __int128 int128_t;

Mnemonic::Mnemonic(string& m) : mnemonic(m) {
    mnemonic_words = split_mnemonic(mnemonic);
    mnemonic_indicies = words_to_indicies(mnemonic_words);
    //entropy_int = indicies_to_entropy(mnemonic_indicies);
}

array<string,12> Mnemonic::split_mnemonic(string& mnemonic){
    array<string,12> words;
    string word;
    uint16_t i =0;
    for (char c : mnemonic) {
        if (c == ' ' || c=='\0') {
            words[i] = word;
            word = "";
            i += 1;
        } else {
            word += c;
        }
    }
    words[i] = word;
    return words;
}

array<uint16_t,12> Mnemonic::words_to_indicies(array<string,12>& mnemonic_words){
    array<uint16_t,12> indicies;
    uint16_t i=0;
    for (auto& word : mnemonic_words) {
        indicies[i] = getWordIndex(wordList, word);
        i++;
    }
    return indicies; 
}

uint128_t Mnemonic::indicies_to_entropy(array<string,12>& mnemonic_words){
    uint128_t entropy;

    return entropy; 
}

