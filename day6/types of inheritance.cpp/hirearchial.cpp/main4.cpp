//Parent class and child class
#include<iostream>
using namespace std;
//Parent class
class Parent{
    public:
    void familyNAme(){
        cout<<"Family Name is Kshatriya"<<endl;
    }
};
//child class
class son:public Parent{
    public:
    void sonName(){
        cout<<"Son Name is Arjun"<<endl;
    }
};
class daughter:public Parent{
    public:
    void daughterName(){
        cout<<"Daughter Name is Ayra"<<endl;
    }
};
class youngestChild:public Parent{
    public:
    void youngestChildName(){
        cout<<"Youngest Child Name is Aniketh"<<endl;
    }
};
int main(){
    son s;
    daughter d;
    youngestChild y;
    cout<<"Son Details:"<<endl;
    s.familyNAme();
    s.sonName();
    cout<<"\nDaughter Details:"<<endl;
    d.familyNAme();
    d.daughterName();
    cout<<"\nYoungest Child Details:"<<endl;
    y.familyNAme();
    y.youngestChildName();
    return 0;
}