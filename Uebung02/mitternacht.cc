#include <iostream>
#include <cmath>

double mitternacht_pos(double a, double b, double c){
    double result;
    result = (-b+std::sqrt((b*b)-(4*a*c)))/(2*a);
    return result;
}

double mitternacht_neg(double a, double b ,double c){
    double result;
    result = (-b-std::sqrt((b*b)-(4*a*c)))/(2*a);
    return result;
}
    
int main(int argc, char** argv){

    double a;
    double b;
    double c;

    std::cout << "Enter coefficient a" << std::endl;
    std::cin >> a;
    std::cout << "Enter coefficient b" << std::endl;
    std::cin >> b;
    std::cout << "Enter coefficient c" << std::endl;
    std::cin >> c;

    std::cout << "Formula requested: " << a << "x^2 + " << b << "x + " << c << std::endl;

    if((b*b)-4*a*c < 0){
        std::cout << "Formula has complex roots, aborting..." << std::endl;
        return 0;
    }

    if(a == b and a == 0){
        std::cout << "Formula has no definite solution (a=b=0)." << std::endl;
        return 0;
    }

    double result_pos;
    double result_neg;

    result_pos = mitternacht_pos(a, b, c);
    result_neg = mitternacht_neg(a, b, c);
    
    std::cout << "The roots are: " << result_pos << ", " << result_neg << "."<< std:: endl;

    return 0;
}