/**
 * 2013 J2
 * Rotating Letters
 */

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string input;
    std::cin >> input;

    bool good_word = true;

    char allowed_letters[] = {'I', 'O', 'S', 'H', 'Z', 'X', 'N'};
    for(int i = 0; i < input.length(); i++) {
        bool matches = false;
        for(int j = 0; j < sizeof(allowed_letters)/sizeof(char); j++) {
            if(input[i] == allowed_letters[j]) {
                matches = true;
            }
        }

        if(matches) {
            continue;
        } else {
            good_word = false;
            break;
        }
    }

    if(good_word) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}