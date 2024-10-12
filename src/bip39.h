#include <string>
#include <array>
#include <cstdint>

class Mnemonic {
public:
    std::string mnemonic;
    Mnemonic(std::string& m);
    void print_mnemonic();

private:
    std::array<std::string,12> mnemonic_words;
    std::array<uint16_t,12> mnemonic_indicies;
    std::array<std::string,12> split_mnemonic(std::string& mnemonic);
    std::array<uint16_t,12> words_to_indicies(std::array<std::string,12>& words);
    uint128_t indicies_to_entropy(std::array<std::uint16_t,12>& words);
};