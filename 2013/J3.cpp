/**
 * 2013 J3
 * From 1987 to 2013 
 */

#include <iostream>
#include <vector>
#include <string>

bool check_unique_numbers(int year) {
    std::string numbers = std::to_string(year);
    for(int i = 0; i < numbers.length(); i++) {
        for(int j = 0; j < numbers.length(); j++) {
            if(i == j) continue;

            if(numbers[i] == numbers[j]) {
                return false;
            }
        }
    }

    return true;
}

int main(int argc, char* argv[]) {
    int starting_year;
    std::cin >> starting_year;

    while(1) {
        if(check_unique_numbers(++starting_year)) {
            std::cout << starting_year << std::endl;
            break;
        }
        
    }
}