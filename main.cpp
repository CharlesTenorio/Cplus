#include <iostream>

int main() {
    int number1;
    int number2;
    int sum;

    std::cout << "Enter filst number" ;
    std::cin >> number1;
    std::cout<<"Enter segund number";
    std::cin>> number2;
    sum = number1 + number2;
    std::cout <<"soma e "<< sum<<std::endl;
    return 0;
}