//classess and objects using pointers
#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int runs;

    Player(string n, int r) {
        name = n;
        runs = r;
    }

    void display() {
        cout << "Player: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main() {

    Player p1("Virat Kohili", 120);
    Player p2("Devdutt Padikkal", 119);
    Player p3("Rajat Patidar", 118);
    Player p4("Shubhman Gill", 117);
    Player p5("Abhishek Sharma", 116);
    Player p6("Sai Sudharshan", 117);
    Player p7("Vaibhav Sooryavanshi", 150);
    Player p8("Shreyas Iyer", 99);
    Player p9("K L Rahul", 154);
    Player p10("Ayush Mathre", 98);

    Player *ptr1 = &p1;
    Player *ptr2 = &p2;
    Player *ptr3 = &p3;
    Player *ptr4 = &p4;
    Player *ptr5 = &p5;
    Player *ptr6 = &p6;
    Player *ptr7 = &p7;
    Player *ptr8 = &p8;
    Player *ptr9 = &p9;
    Player *ptr10 = &p10;

    ptr1->display();

    cout << endl;

    ptr2->display();

    cout << endl;

    ptr3->display();

    cout << endl;

    ptr4->display();

    cout << endl;

    ptr5->display();

    cout << endl;

    ptr6->display();

    cout << endl;

    ptr7->display();

    cout << endl;

    ptr8->display();

    cout << endl;

    ptr9->display();

    cout << endl;

    ptr10->display();

    return 0;
}