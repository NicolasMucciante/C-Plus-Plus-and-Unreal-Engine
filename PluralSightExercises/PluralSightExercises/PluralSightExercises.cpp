
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::string;
using std::max;

char d = 'D';
int i = 7;
double dub = 3.14;
bool b = true;
string cat = "Cat";
const int i2 = 92;
string userName;
float f = 19.99;
int i3 = 0;
int firstNum = 100;
int secondNum = 25;
int userAge;


//int add(int x,int y) 
//{
//	int result = x + y;
//	return result;
//}

//void swap(int& x, int& y) {
//	int z = x;
//	x = y;
//	y = z;
//}

//int add(int x, int y, int z) {
//	int result = x + y + z;
//	return result;
//}
//
//class Pokedex {
//public:
//	string evolves;
//	string type;
//};
//
//class Vehicle {
//public:
//	string type;
//	int year;
//	void hello();
//};
//
//void Vehicle::hello() {
//	cout << "Hello\n";
//}
//
//class Myclass {
//public:
//	void creation(){
//		cout << "Instance created. \n";
//	}
//};
//
//class Food {
//public:
//	string foodType;
//};
//
//class Icecream {
//public:
//	string flavor;
//	string toppings = "N/A\n";
//	Icecream(string x, string y, int z);
//private:
//	int FavNum;
//protected:
//	bool DariyFree;
//};
//
//Icecream::Icecream(string x, string y, int z) {
//	flavor = x;
//	toppings = y;
//	FavNum = z;
//}
//
//class pizza : public Food {
//public:
//	string size = "Large\n";
//	string toppings = "Peperoni\n";
//};
//
//class Class1 {
//public:
//	string test1 = "This is some text in class 1\n";
//protected:
//	int number;
//};
//
//class Class2 {
//public:
//	string test2 = "This is some text in class 2\n";
//};
//
//class FinalClass : public Class1, public Class2 {
//public:
//	void Type() {
//		cout << (test1) << '\n';
//		cout << (test2) << '\n';
//	}
//	void setNumber(int n) {
//		number = n;
//	}
//	int getNumber() {
//		return number;
//	}
//};

class Food {
public:
	void typeFood()
	{
		cout << "There are several differnt food types\n";
	}
};

class Vegetable : public Food {
public:
	void typeFood() {
		cout << "A vegetable is a type of food.\n";
	}
};

class Fruit : public Food {
public:
	void typeFood() {
		cout << "A fruit is a type of food.\n";
	}
};






int main()
{
	/*cout << d << '\n';
	cout << i << '\n';
	cout << dub << '\n';
	cout << b << '\n';
	cout << cat << '\n';
	cout << i2 << '\n';

	cout << "Hello World!\n";
	cout << "This is on a new line.";*/

	/*cout << "What is your name?\n";
	cin >> userName;
	cout << "Hello, " << userName << ", nice to meet you!\n";
	cout << "Your name is " << userName.length() << " characters long!\n";
	cout << "The 3rd character in your name is " << userName[2] << "!\n";
	cout << "I'm now going to change the first letter of your name!\n";
	userName[0] = 'M';
	cout << userName;*/

	/*cout << 5 + 2 << '\n';
	cout << 9 - 5 << '\n';
	cout << 10 * 6 << '\n';
	cout << 60 / 2 << '\n';
	i3++;
	cout << i3;*/

	/*cout << "3 < 5? " << (3 > 5) << '\n';
	cout << "5 == 5? " << (5 == 5) << '\n';
	cout << "10 != 9? " << (10 != 9) << '\n';
	cout << "20 <= 25? " << (20 <= 25) << '\n';*/

	/*int one = 1;
	int two = 2;

	cout << (one += two);*/

	/*int a = 2;
	
	a <<= 4;
	cout << a << '\n';*/

	/*bool bubba = true;
	if (3 == 3 && bubba) 
	{
		cout << "Both are true\n";
	}
	else 
	{
		cout << "Something is wrong...\n";
	}

	if (20 == 20 || bubba) 
	{
		cout << "One thing is correct here.\n";
	}*/

	/* This is line 1 of a comment
	this is the second.*/

	//cout << max(3, 20) << '\n'; //The max number of the 2

	//cout << std::sqrt(30) << '\n'; //The square root of 30

	//cout << std::round(3.14159265) << '\n'; //Round pi (hehe)

	//cout << std::pow(3, 2) << '\n'; //3 to the power of 2

	//if (false) 
	//{
	//	cout << "Yeah thats true.\n";
	//}
	//else if (true) 
	//{
	//	cout << "Yeah thats also true.\n";
	//}


	/*int userSelect;
	cout << "Select a number 1 - 7:\n";
	cin >> userSelect;

	switch (userSelect) 
	{
	case 1:
		cout << "Monday\n";
		break;
	case 2:
		cout << "Tuesday\n";
		break;
	case 3:
		cout << "Wednesday\n";
		break;
	case 4:
		cout << "Thursday\n";
		break;
	case 5:
		cout << "Friday\n";
		break;
	case 6:
		cout << "Saturday\n";
		break;
	case 7:
		cout << "Sunday\n";
		break;
	}

	int time = 2;
	string result = (time < 18) ? "Good day!\n" : "Good Evening!\n";
	cout << result;

	bool x = true;
	while (x) {
		cout << "Yes.\n";
		x = false;
	}

	bool y = true;
	do {
		cout << "Double yes.\n";
		y = false;
	} while (y);

	for (int i = 0; i < 10; i++) {
		cout << "Berries and Cream\n";
	}*/

	/*int test = 0;
	while (true) {
		cout << "True.\n";
		test++;
		if (test == 5) {
			break;
		}
		if (test == 2) {
			continue;
		}
		cout << "Still true.\n";
	}

	cout << "Exited Loop.\n";*/

//string fruits[4] = { "Apple", "Banana", "Kiwi", "Pear" };

//cout << fruits[2];

//for (int i = 0; i < 4; i++) {
//	cout << fruits[i] << '\n';
//}
//
//string vegetable = "Carrot";
//string &Orangevegetable = vegetable;
//
//cout << vegetable << '\n';
//cout << Orangevegetable << '\n';
//
//string* pointer = &vegetable;
//
//cout << &vegetable << '\n';
//cout << pointer << '\n';
//cout << *pointer << '\n';


//cout << add(5, 10);


//cout << "Before: \n";
//cout << firstNum << '\n';
//cout << secondNum << '\n';
//
//swap(firstNum, secondNum);
//
//cout << "After: \n";
//cout << firstNum << '\n';
//cout << secondNum << '\n';

//cout << "Adding 2: ";
//cout << add(5, 9) << '\n';
//
//
//cout << "Adding 3: ";
//cout << add(10, 6, 12) << '\n';
//
//Pokedex Squirtle;
//Squirtle.evolves = "Wartortle";
//Squirtle.type = "Water";
//
//Pokedex Charmander;
//Charmander.evolves = "Charmeleon";
//Charmander.type = "Fire";
//
//cout << Charmander.evolves << '\n';
//cout << Charmander.type << '\n';
//
//cout << Squirtle.evolves << '\n';
//cout << Squirtle.type << '\n';
//
//
//Vehicle Charger;
//Charger.type = "Car";
//Charger.year = 2015;
//
//cout << Charger.type << '\n';
//cout << Charger.year << '\n';
//Charger.hello();
//
//Myclass MyObj;
//MyObj.creation();
//
//Icecream NicsFav("chocolate", "sprinkles", 7);
//
//cout << NicsFav.flavor << " " << NicsFav.toppings << '\n';
//
//pizza myPizza;
//
//myPizza.foodType = "Dinner";
//
//cout << myPizza.foodType << " " << myPizza.size;
//
//FinalClass myFinal;
//
//cout << myFinal.test1 << " " << myFinal.test2;
//
//myFinal.setNumber(6);
//
//cout << myFinal.getNumber();

Food myFood;
Vegetable myVegetable;
Fruit myFruit;

myFood.typeFood();
myVegetable.typeFood();
myFruit.typeFood();

try {
	cout << "How old are you?\n";
	cin >> userAge;
	if (userAge < 21) {
		cout << "Sorry you can NOT buy alcohol...\n";
	}
	else {
		throw(userAge);
	}
}
catch (int i) {
	cout << "You may buy alcohol.";
}


}
	
