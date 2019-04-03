#include <iostream>
using namespace std;


//a recursive function
int fibo(int n){
    if(n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

//a function with multiple parameters
int add(int x, int y) {
    int z = x + y;
    return z;
}

//a function that returns multiple values (code from GeeksForGeeks)
//uses references to store returned values
void compare(int a, int b, int&add_great, int &add_small){
    if(a>b) {
        add_great = a;
        add_small = b;
    }
    else {
        add_great = b;
        add_small = a;
    }
}

void increment(int t) {
    t = t + 1;
}

int main() {
    int n = 10;
    int z = 45;
    int t = 4;
    //char g [] = {'c','a','t'};
   // char h [] = {'d','o','g'};
   //g=h;
   // h[1] = 'u';
    //cout << h << endl;
    increment(t);
    cout << "t: " << t << endl;
    int great, small, c, d; //for fxn with multiple values
    cout << fibo(n) << endl;
    cout << n << endl;
    cout << add(2,4) << endl;
    cout << "z: " << z << endl;
    printf("Enter two numbers: \n");
    scanf("%d%d", &c, &d);
    compare(c,d,great,small);
    printf("\nThe greater number is %d and the smaller number is %d",great,small);
    //declared a variable
    int num = 0;
    cout << " " << endl;
    //declared the same variable in a loop
    for(int i = 0; i < 10; i++){
        int num = 2;
        num = num + i;
        cout << "num in loop: " << num << endl;
    }
    cout << "num: " << num;
}

