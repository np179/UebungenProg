#include <iostream>

long int fibo(int number){
    long int f;

    if(number <= 0){
        std::cout << "Invalid Input." << std::endl;
    }

    else{
        long int f1 = 1;
        long int f2 = 0;
        for(int i = 0; i < number; i++){
            if(i == 0){
                std::cout << "f1 = 0" << std::endl;
                f = 0;
            }
            if(i == 1){
                std::cout << "f2 = 1" << std::endl;
                f = 1;
            }
            if(i > 1){
                f = f1+f2;
                f2 = f1;
                f1 = f;
                std::cout << "f" << i+1 << " = " << f << std::endl;
            }
        }
    }

    return 0;
}

int main(int argc, char** argv){

    int number;
    std::cout << "Input N:" << std::endl;
    std::cin >> number;
    std::cout << "Running for N=" << number << "." << std::endl;

    fibo(number);

    return 0;
}