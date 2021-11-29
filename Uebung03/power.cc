#include <iostream>

namespace power{

    int iterative(int q, int n){
        int prod = 1;

        if(n < 0){
            std::cout << "Invalid, n < 0." << std::endl;
            return 0;
        }
        if(n == 0){
            std::cout << q << "^" << n << " = " << 1 << std::endl;
            return 1;          
        }
        else{
            for(int i=0; i<=n; i++){
                if(i==0){
                std::cout << q << "^" << i << " = " << 1 << std::endl;                    
                }
                else{
                    prod *= q;
                    std::cout << q << "^" << i << " = " << prod << std::endl;
                }
            }
            return prod;
        }
    }

    int recursive(int q, int n){
        int prod = q;

        if(n < 0){
            std::cout << "Invalid, n < 0." << std::endl;
            return 0;
        }
        else{
            if(n >= 1){
                prod *= recursive(q, n-1);
                std::cout << q << "^" << n << " = " << prod << std::endl;
                return prod;
             }
            if(n == 0){
                prod = 1;
                std::cout << q << "^" << n << " = " << prod << std::endl;
                return prod;
            }
        }
        return prod;
    }
} //end namespace power

int main(int argv, char** argc){
    int q;
    int n;

    std::cout << "Input q:" << std::endl;
    std::cin >> q;
    std::cout << "Input n:" << std::endl;
    std::cin >> n;

    std::cout << "Iterative:" << std::endl;
    int a = power::iterative(q,n);
    std::cout << "Result: " << a << std::endl;
    std::cout << "Recursive:" << std::endl;
    int b = power::recursive(q,n);
    std::cout << "Result: " << b << std::endl;

    return 0;
}