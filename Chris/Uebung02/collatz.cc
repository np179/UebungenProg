#include <iostream>

void collatz(int number){

    std::cout << "Starting collatz with: " << number << "." << std::endl;

    int counter = 0;

    while(number != 1 and number !=  0 and number != -1 and number != -5 and number != -17){
        if(number%2 == 0){
            number /= 2;
        }
        else{
            number *= 3;
            number += 1;
        }
        counter += 1;
        std::cout << "Iteration" << counter << ": Value = " << number << "." << std::endl;
    }
    std::cout << "Exited collatz with: " << number << "." << std::endl;
}

int main(int argc, char** argv){
    int number;

    std::cout << "Enter integer: " << std::endl;
    std::cin >> number;

    collatz(number);

    return 0;
}