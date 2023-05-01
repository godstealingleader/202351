#include <iostream>
#include <string>

struct car
{
	std::string manufacturer;
	int made_year;

};

int main()
{
	using namespace std;
	cout << "How many cars do you wish to catalog? ";
	int car_number = 0; cin >> car_number;/* cin.get();*/
	car* car_inform = new car[car_number];
	for (int i = 0; i < car_number; i++)
	{
		cout << "Car #" << i + 1 << endl;
		cout << "Please enter the make:";cin.get(); getline(cin, car_inform[i].manufacturer);
		cout << "Please enter the year made:"; cin >> car_inform[i].made_year;/* cin.get()*/
	}
	cout << "Here is your collection" << endl;
	for (int i = 0; i < car_number; i++)
	{
		cout << car_inform[i].made_year << " " << car_inform[i].manufacturer << endl;
	}

	return 0;
}