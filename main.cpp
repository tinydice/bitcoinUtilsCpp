#include "src/bip39.h"
#include "src/helpers.h"
#include <string>

using std::string;

int main() {
    string m_string = string("plastic bubble oxygen club sort vivid tone session party enjoy team nation");
    Mnemonic mnem(m_string);

    return 0;
}
