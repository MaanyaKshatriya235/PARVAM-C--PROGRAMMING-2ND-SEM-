#include <iostream>
#include <string>
using namespace std;

class Farmer
{
private:
    string name;
    string crop;

public:
    void getDetails()
    {
        cout << "Enter Farmer Name: ";
        getline(cin, name);

        cout << "Enter Crop Name: ";
        getline(cin, crop);
    }

    void showRecommendation()
    {
        cout << "\n--- Market Analysis Report ---\n";

        if (crop == "Tomato" || crop == "tomato")
        {
            cout << "Crop: Tomato\n";
            cout << "Demand: High\n";
            cout << "Expected Profit: High\n";
        }
        else if (crop == "Onion" || crop == "onion")
        {
            cout << "Crop: Onion\n";
            cout << "Demand: Medium\n";
            cout << "Expected Profit: Medium\n";
        }
        else if (crop == "Cotton" || crop == "cotton")
        {
            cout << "Crop: Cotton\n";
            cout << "Demand: Low\n";
            cout << "Expected Profit: Low\n";
        }
        else if (crop == "Maize" || crop == "maize")
        {
            cout << "Crop: Maize\n";
            cout << "Demand: Least\n";
            cout << "Expected Profit: Least\n";
        }
        else
        {
            cout << "Crop: " << crop << endl;
            cout << "Market data not available.\n";
        }
    }
};

int main()
{
    Farmer farmer;

    cout << "===== Smart Agriculture Market Analysis System =====\n\n";

    farmer.getDetails();
    farmer.showRecommendation();

    return 0;
}