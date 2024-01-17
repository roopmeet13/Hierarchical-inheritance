// example of hierarchical inheritance
#include <iostream>

using namespace std;

class parent{
    public:
    parent(){
        cout<<"Constructor of parent class is called"<<endl;
    }
};

class child1: public parent{
    public:
    child1(){
        cout<<"Constructor of child1 class is called"<<endl;
    }
};

class child2: public parent{
    public:
    child2(){
        cout<<"const. of child2 class"<<endl;
    }
};

int main()
{
    child2 c;

    return 0;
}