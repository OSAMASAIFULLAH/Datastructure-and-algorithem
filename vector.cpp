#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
cout<<cars.back()<<endl;
cars.push_back("tasla");
    // Print vector elements
    for (string car : cars) {
        cout << car << "\n";
    }
    cout<<"the size of car is"<<endl;
    cout<<cars.size();
    return 0;
}
