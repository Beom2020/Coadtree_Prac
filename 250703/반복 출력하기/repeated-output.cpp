#include <iostream>

using namespace std;

int N;

void PrintNLines(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++)
            cout << "*";
        cout << endl;
    }
}


int main() {

    int row_num;
    cin >> row_num;

    PrintNLines(row_num);

    // Please write your code here.

    return 0;
}