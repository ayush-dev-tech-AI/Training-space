#include <iostream>
using namespace std;

int power(int p , int q){
    if(q == 0){
        return 1;
    }
    return p*power(p , q-1);
}

int main() {
    int n , x, y;
    double res;
    while(true){
    cout << "    ===== Calculator =====\n\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n8. Get rickrolled\n";
    cout << "    Choose an option : ";
    cin >> n;
    if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6){
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    }
    switch(n){
        case 1:
        res = x + y;
        cout << "So, the sum is : " << res << endl;
        break;
        case 2:
        res = x - y;
        cout << "So, the difference is : " << res << endl;
        break;
        case 3:
        res = x * y;
        cout << "So, the product is : " << res << endl;
        break;
        case 4:
        if(y==0){
            cerr << "Dividing by zero is undefined" << endl;
            break;
        }
        res = (double)x / y;
        cout << "So, the quotient is : " << res << endl;
        break;
        case 5:
        if(y==0){
            cerr << "Dividing by zero is undefined" << endl;
            break;
        }
        res = x % y;
        cout << "So, the remainder is : " << res << endl;
        break;
        case 6:
        if(y<0){
            cerr << "please use whole number for exponentiation" << endl;
            break;
        }
        res = power(x,y);
        cout << "So, the power is : " << res << endl;
        break;
        case 7:
        cout << "exiting calculator ....." << endl;
        return 0;
        break;
        case 8:
        system("curl ascii.live/rick");
        return 0;
        break;
        default:
        cerr << "INVALID CHOICE" << endl;
        break;
    }
}
    return 0;
}