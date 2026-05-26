#include <iostream>
#include <string>

class Family {
public:
    std::string name;
    std::string relation;
    int age;

    void introduce() {
        std::cout << name << " is my " << relation
                  << " and is " << age << " years old.\n";
    }
};

int main() {

    Family member1;
    member1.name = "RAMU";
    member1.relation = "Father";
    member1.age = 50;

    Family member2;
    member2.name = "POORNIMA";
    member2.relation = "Mother";
    member2.age = 43;

    Family member3;
    member3.name = "GAGAN";
    member3.relation = "Brother";
    member3.age = 15;

    Family member4;
    member4.name = "MEGHA";
    member4.relation = "Sister";
    member4.age = 25;

    member1.introduce();
    member2.introduce();
    member3.introduce();
    member4.introduce();

    return 0;
}