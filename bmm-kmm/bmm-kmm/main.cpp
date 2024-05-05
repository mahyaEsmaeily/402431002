#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3,num4;
    int kmm=0;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
num3=num1;
num3=num1;
num4=num2;
     while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
      int bmm = num1;
     while (kmm%num4 != 0 || kmm == 0){
        kmm+=num3;
    }

    cout << "Bmm " <<num3 << "," << num4 << ":" << bmm << endl;
     cout << "kmm " <<num3 << "," << num4 << ":" << kmm << endl;
    return 0;
}
