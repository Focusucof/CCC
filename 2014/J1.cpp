#include <iostream>

bool equilateral = false;
bool isosceles = false;
bool scalene = false;

void check_triangle(int angles[3]) {
    if(angles[0] == angles[1] && angles[0] == angles[2]) {
        std::cout << "Equilateral" << std::endl;
        return;
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) continue;

            if(angles[i] == angles[j]) {
                std::cout << "Isosceles" << std::endl;
                return;
            }
        }
    }

    std::cout << "Scalene" << std::endl;
    return;
}

int main(int argc, char* argv[]) {
    int angles[3] = {};
    for(int i = 0; i < 3; i++) {
        std::cin >> angles[i]; 
    }

    bool isTriangle = (angles[0] + angles[1] + angles[2] == 180);

    if(isTriangle) {
        check_triangle(angles);
    } else {
        std::cout << "Error" << std::endl;
    }
}