#include<bits/stdc++.h>

using namespace std;

int main(){
    int *p, var = 10;
    p = &var;
    cout << "The value of p is " << p << endl;
    cout << "The value of var is " << *p << endl;

    int c[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = c;
    cout <<  "value of 1st elem " << *ptr << endl;
    cout << "value of 5th elem" << *(ptr+4) << endl;
    ptr++;
    cout << "value of 1st elem " << *ptr << endl;

    int k[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int i,j;
    cout << "Please enter which element you want: ";
    cin >> i >> j;

    cout << endl << "The address k is  " << k << " and *k is " << *k << " However **k is " << **k;
    cout << endl << "The element via dereferencing is " << *(*(k+i)+j);
    cout << endl << "The element via array notation is " << k[i][j] << endl;

    return 0;




}