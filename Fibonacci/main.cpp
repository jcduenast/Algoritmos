#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* isinf, sqrt */

using namespace std;

int intTest(){
    int it = 2;
    int a = 0;
    int b = 1;
    int c = a+b;
    while (0<c){
        a = b;
        b = c;
        c = a+b;
        it++;
        //cout << c << endl;
    }
    cout << "Numero de Fibonacci para int: " << it << endl;
    return 0;
}

int floatTest(){
    int it = 2;
    float a = 0;
    float b = 1;
    float c = a+b;
    while (!isinf(c)){
        a = b;
        b = c;
        c = a+b;
        it++;
        //cout << c << endl;
    }
    cout << "Numero de Fibonacci para float: " << it << endl;
    return 0;
}

int longTest(){
    int it = 2;
    long a = 0;
    long b = 1;
    long c = a+b;
    while (0<c){
        a = b;
        b = c;
        c = a+b;
        it++;
        //cout << c << endl;
    }
    cout << "Numero de Fibonacci para long: " << it << endl;
    return 0;
}

int doubleTest(){
    int it = 2;
    double a = 0;
    double b = 1;
    double c = a+b;
    while (!isinf(c)){
        a = b;
        b = c;
        c = a+b;
        it++;
        //cout << c << endl;
    }
    cout << "Numero de Fibonacci para double: " << it << endl;
    return 0;
}

int main() {
    intTest();
    floatTest();
    longTest();
    doubleTest();
    return 0;
}
