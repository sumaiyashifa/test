#include<bits/stdc++.h>
using namespace std;

class shape{
public:
 virtual void draw()=0;
};

class rectangle : public shape{
    public:
    void draw()
    {
        cout<<"Inside Rectangle class "<<endl;
    }
};

class square : public shape{
public:
    void draw()
    {
        cout<<"Inside square class"<<endl;
    }
};

class shapefactory{
    static shapefactory *a;
    shapefactory(){}
public:
    static shapefactory* getinstance()
    {
        if(a==nullptr)
        {
            a=new shapefactory();
        }
        return a;
    }


};

shapefactory* shapefactory::a=nullptr;

int main()
{
    shapefactory* shapefactory1 = shapefactory::getinstance();
    shapefactory* shapefactory2 = shapefactory::getinstance();
    cout<<"Address of shapefactory 1 : "<<shapefactory1<<endl;
    cout<<"Address of shapefactory 2 : "<<shapefactory2<<endl;



}
