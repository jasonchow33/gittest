#include "iostream"
#include "cmath"
#include "fstream"
#include "string"
//#include "header.h"
using namespace std;

class cow
{
protected:
    char *moo;

public:
    void m(){
        cout << moo << endl;
    }
};

class sick_cow : public cow
{
    public:
    void sick_moo(){
        cout << this->moo << endl;
    }
};



int main()
{

}
