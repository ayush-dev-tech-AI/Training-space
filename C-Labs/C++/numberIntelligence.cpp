#include <iostream>

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

void results(int a){
    int i , digit , rev = 0 , sum = 0;
    for(i = 0 ; a > 0 ; i++){
        digit = a%10;
        rev = rev*10+digit;
        a/=10;
        sum+=digit;
    }
    std::cout << "Total digits : " << i << std::endl;
    std::cout << "Sum of digits : " << sum << std::endl;
    std::cout << "Reverse of number : " << rev << std::endl;
}

int main(){
    int n;
    std::cout << "Enter a number to analyse : ";
    std::cin >> n;
    if(n <= 0){
        std::cerr << "PLEASE ENTER ONLY NATURAL NUMBER" << std::endl;
        return 1;
    }
    std::cout << "Even/Odd status : " << (n & 1 ? "Odd" : "Even") << std::endl;
    std::cout << "Prime status : " << (isPrime(n) ? "Prime" : "Not prime") << std::endl;
    results(n);
    return 0;
}