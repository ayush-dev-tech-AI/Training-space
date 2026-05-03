#include <iostream>
using namespace std;

int main() {
    int n = 12345;

    while (n >= 100) {
        int rev = 0, temp = n;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }

        rev /= 10;  
        n = rev; 
    }

    cout << n % 10;
    return 0;
}