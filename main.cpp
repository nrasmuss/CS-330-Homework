#include <iostream>
using namespace std;
int main() {
    int x = 3;
    //if statement
    if(x == 3) {
        cout << "X is " << x << endl;
    }
    cout << "" << endl;
    //one-condition​ if/else​ statement
    x = 4;
    if(x > 3) {
        cout << "The number " << x << " assigned to x is greater than 3" << endl;
    }
    else {
        cout << "The number " << x << " assigned to x is less than or equal to 3" << endl;
    }
    cout << "" << endl;
    //one condition if/else if/else statement
    x = 2;
    if(x > 3) {
        cout << "The number " << x << " assigned to x is greater than 3" << endl;
    }
    else if(x == 3) {
        cout << "The number " << x << " assigned to x is equal to 3" << endl;
    }
    else{
        cout << "The number " << x << " assigned to x is less than 3" << endl;
    }
    cout << "" << endl;
    x = 8;
    int y = 4;
    //multi-condition ​if/else​ statement (e.g. "if x>0 && y< 10" - short-circuit eval)
    if(x > 0 && y < 10) {
        int z = x + y;
        cout << x << " + " << y << " = " << z << endl;
    }
    else {
        cout << " x is " << x << " & y is " << y << endl;
    }
    cout << "" << endl;
    //while​ loop in C++
    int a = 0;
    cout << "Numbers 0 - 20:" << endl;
    while(a <= 20){
        cout << a << endl;
        a++;
    }
    cout << "" << endl;
    //do/while​ loop
    int i = 0;
    do {
        cout << "Value of i: " << i << endl;
        i++;
    }
    while(i < 10);
    cout << "" << endl;
    //for​ loop
    for(int count = 20; count <= 30; count++){
        cout << "The number equals " << count << endl;
    }
    cout << "" << endl;
    //​foreach loop
    string letters[] = {"a","b","c","d","e"};
    for(string letter:letters){
        cout << letter << endl;
    }
    cout << "" << endl;
    //switch-case​ statement with break statement
    int h = 2;
    switch (h) {
        case 1: cout << "Choice is 1" << endl;
            break;
        case 2: cout << "Choice is 2" << endl;
            break;
        case 3: cout << "Choice is 3" << endl;
            break;
        default: cout << "Choice other than 1, 2, o 3" << endl;
            break;
    }
    cout << "" << endl;

    //​continue​ statements (example code from programiz.com)
    for(int j = 0; j <= 10; ++j) {
        if ( j == 6 || j == 9){
            continue;
        }
        cout << j << "\t";
    }

}