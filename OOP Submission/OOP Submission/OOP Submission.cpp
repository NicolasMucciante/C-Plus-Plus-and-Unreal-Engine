
#include <iostream>
using namespace std;
using std::cout;
using std::cin;

class Dog {
public:
    string breed;
    string color;
    string height;
    int weight;
    void shake() {
        cout << "Shake Shake...\n";
    }
    void sit() {
        cout << "*Sits*\n";
    }
    void layDown() {
        cout << "*Lays down*\n";
    }
};

int main()
{
    Dog myDog;
    myDog.breed = "Hound";
    myDog.color = "Brown";
    myDog.height = "2 feet";
    myDog.weight = 60;

    myDog.shake();
    myDog.layDown();
    myDog.sit();

    cout << "Breed: " << myDog.breed << '\n' << "Color: " << myDog.color << '\n' << "Height: " << myDog.height << '\n' << "Weight: " << myDog.weight;
}