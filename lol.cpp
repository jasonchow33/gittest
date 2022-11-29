#include "iostream"
using namespace std;

class test{
    int *elt;
    public:
    void setelt(int n){*elt=n;}
    int show(){return *elt;}
};

void change(test a, int n){
    a.setelt(n);
}

int main(){
    test a;
    a.setelt(0);
    change(a, 10);
    cout << a.show() << endl;
    int x = 4; 
    int y;
    (y=x)+=2;
}
