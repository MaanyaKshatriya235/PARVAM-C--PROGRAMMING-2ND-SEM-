//Student Marks Storage
#include <iostream>
using namespace std;

template <class T>
class Marks
{
    T mark;

public:
    void setMark(T m)
    {
        mark = m;
    }

    void display()
    {
        cout << "Marks = " << mark << endl;
    }
};

int main()
{
    Marks<int> s1;
    s1.setMark(95);
    s1.display();

    Marks<float> s2;
    s2.setMark(89.5);
    s2.display();

    return 0;
}