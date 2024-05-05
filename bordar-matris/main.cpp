#include <iostream>
using namespace std;


int main() {
    int bordar[1][3];
    int mul[1][3];
    cout << "3 ta adad bordar ro vared konid:" << endl;
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> bordar  [i] [j];
        }
    }
   int  matrix[3][3];
    cout << "9 ta adad matrix ro vared konid:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
      for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 3; ++j) {
            mul[i][j]=0;
      for(int k=0 ; k< 3; ++k){
        mul[i][j]+= bordar[i][k] * matrix[k][j];

      }

        }
    }

    cout<< "bordar:";
    for (int i=0 ; i<1 ; ++i){
        for(int j=0 ; j<3 ; ++j){
            cout <<bordar[i][j]<< " ";
        }
        cout<< "\n";
    }
    cout<< "matrix:"<< "\n";
    for (int i=0 ; i<3 ; ++i){
        for(int j=0 ; j<3 ; ++j){
            cout <<matrix[i][j]<< " ";
        }
        cout<< "\n";
    }

    cout<< "mul:";
    for (int i=0 ; i<1 ; ++i){
        for(int j=0 ; j<3 ; ++j){
            cout <<mul[i][j]<< " ";
        }
        cout<< "\n";
    }

    return 0;
}
