//functions using pointers
#include <iostream>
using namespace std;

class Crop {
public:

    // Rainfall only
    void predictYield(int rainfall) {
        cout << "Predicted Yield(during rainfall) = "
             << rainfall * 2
             << " kg" << endl;
    }

    // Rainfall and Fertilizer
    void predictYield(int rainfall, int fertilizer) {
        cout << "Predicted Yield(rainfall + fertilizer) = "
             << rainfall * 2 + fertilizer * 5
             << " kg" << endl;
    }

    // Rainfall, Fertilizer and Soil Quality
    void predictYield(int rainfall, int fertilizer, int soilQuality) {
        cout << "Predicted Yield (rainfall + fertilizer + soilQuality) = "
             << rainfall * 2 + fertilizer * 5 + soilQuality * 10
             << " kg" << endl;
    }
};

int main() {

    Crop crop1;

    // Pointer to object
    Crop *ptr = &crop1;

    ptr->predictYield(50);

    ptr->predictYield(50, 20);

    ptr->predictYield(50, 20, 8);

    return 0;
}