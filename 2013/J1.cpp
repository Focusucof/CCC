/**
 * 2013 J1
 * Next In Line
 */

#include <iostream>

int main(int argc, char* argv[]) {
    int youngest_child = 0;
    int middle_child = 0;

    std::cin >> youngest_child;
    std::cin >> middle_child;

    int difference = middle_child - youngest_child;
    int oldest_child = middle_child + difference;

    std::cout << oldest_child << std::endl;
}