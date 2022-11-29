#include "iostream"
using namespace std;

double foo(int a, double b, int c){
    while (c<=1) c++;
    cout << (a/b) << endl;
    return (a/c);
}
