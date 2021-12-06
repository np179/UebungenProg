/* make parts of the standard library available */
#include <iostream>
#include <string>

// 32-Bit Integer [-2^31,2^31-1]
int i = 1;

// 64-Bit Integer [-2^63-2^63-1]
long l =  1;

// 8-Bit Integer [-2^7-2^7-1]
char c = 1;

// Boolean True (1) or False (0)
bool b = true;

//Text (#include <string>)
std::string msg = "Hello";

// Fließkommazahl doppelte Genauigkeit
double d = 3.141;

// Fließkommazahl einfacher Genauigkeit
float f = 3.141;

// wenn nur positive Zahlen vorangestelltes unsigned
unsigned int us_i = 1;

// scopes -> block scope = durch geschweifte Klammer eingeschlossene Gruppe von Statements
// können beliebig geschachtelt werden
// variablen sind nur existent, solange man sich im scope befindet in welchem sie deklariert wurden

int cube(int x){
    // x existiert in der gesamten Funktion
    {
        int y = x*x; // y existiert ab hier
        x = x*y;
    } // y existiert hier nicht mehr
    return x;
}

// innerhalb eines scopes müssen variablen eindeutig benannt werden, mehrfachdeklarationen sind nicht möglich
// namen im inneren scope überschreiben temporär Namen im äußeren Scope
/*
int abs(int x){...}

{
    int x = -2;
    {
        double x = 3.3; int abs = -2;
        std::cout << x << std::endl; // -> 3.3
        x = abs(x); // Compile-Fehler
    }
    x = abs(x); // x == 2
}
*/

// combined binary operators
/*
a == b || b == c; // a equal b or b equal c
a == b or b == c; // a equal b or b equal c
a == b && b == c; // a equal b and b equal c
a == b and b == c; // a equal b and b equal c
*/

// Texte/Strings
/*
std::string msg = "Hello world!";
// addition von strings
std::string hello = "Hello,";
std::string world = "world";
std::string msg = hello + world;
// checking strings
std::string a = "a";
a == "b"; // -> False
*/

//IO
/*
#include <iostream>

std::string user = "Joe";
std::cout << "Hello, " << user << std::endl;

std::string user = "";
int answer = 0;
std::cout << "Enter your name: " << std::endl;
std::cin >> user;
std::cout << "Enter your answer: " << std::endl;
std::cin >> answer;
std::cout << "Hi " << user << "! Your answer was: " << answer << std::endl;
*/

// if else
/*
int abs(int x){
    if (x > 0){
        return x;
   }
   else{
       return -x;
   }
}
*/

// while for
/*
int sum_recursive(int n){
    if(n > 0){
        return sum_recursive(n - 1) + n;
    }
    else{
        return 0;
    }
}

int sum_iterative(int n){
    int result = 0;
    int i = 0;
    while (i <= n){
        result += i;
        i++;
    }
    return result;
}

int sum_for(int n){
    int result = 0;
    for(int i = 0; i <= n; i++){
        result += i;
    }
    return result;
}
*/


// custom function that takes a string as an argument
void print(std::string msg){ //void function doesnt need return value
    //write to stdout
    std::cout << msg << std::endl;
}

// main function is called at program start, has to exist
int main(int argc, char** argv){
    // variable declaration and initialization
    std::string greeting = "Hello, world!";
    print(greeting);
    return 0;
}
