//encapsulation
//abstraction
//pointer
//getter and setter
#include<iostream>
using namespace std;
//abstract class
class Student {
    private:
        int marks;
//encapsulation
    protected:
        string name;
    public:
    //setter method
        void setMarks(int m) {
            marks = m;
    }
    //getter metod
    int getmarks(){
        return marks;
    }
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
    //abstraction
    virtual void display()=0;
};
//derived class
class EngineeringStudent : public Student 
{
    public:
    void display() 
    {
        cout<<"\n----Student Details----\n";
        cout<<"\nName: "<<getName();
        cout<<"\nMarks: "<<getmarks();
        cout<<"\nResult:";
        if(getmarks()>=35)
        {
            cout<<"Pass";
        }
        else
        {
            cout<<"Fail";
        }
        cout<<endl;
    }
};
int main()
{
    //pointer object creation
    EngineeringStudent *s1 = new EngineeringStudent();
    s1->setName("Dev");
    s1->setMarks(85);
    s1->display();
    delete s1; 
    return 0;
}