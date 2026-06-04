//operator overloading using pointers
#include <iostream>
using namespace std;

class DataPack {
public:
    int dataGB;

    DataPack(int d) {
        dataGB = d;
    }

    DataPack operator+(DataPack d) {
        return DataPack(dataGB + d.dataGB);
    }
};

int main() {
    DataPack user1(5);
    DataPack user2(10);

    DataPack *p1 = &user1;
    DataPack *p2 = &user2;

    DataPack total = (*p1) + (*p2);

    cout << "Total Data = " << total.dataGB << " GB";

    return 0;
}