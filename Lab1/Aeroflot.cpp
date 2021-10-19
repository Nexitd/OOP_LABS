#include <iostream>
#include <vector>

using namespace std;

class Aeroflot {
	string				destination;
	string				airplaneModel;
	int					voyageNumber;
	int					flightTime;
	string				dayOfWeek;

public:
	Aeroflot() {
		destination = "Default";
		airplaneModel = "Default";
		voyageNumber = 0;
		flightTime = 0;
		dayOfWeek = "Default";
	}

	Aeroflot(string a, string b, int c, int d, string e) {
		destination = a;
		airplaneModel = b;
		voyageNumber = c;
		flightTime = d;
		dayOfWeek = e;
	}

	~Aeroflot() {}

	void SetDestination(string s) {
		destination = s;
	}

	void SetAirplaneModel(string s) {
		airplaneModel = s;
	}

	void SetVoyageNumber(int a) {
		voyageNumber = a;
	}

	void SetFlightTime(int a) {
		flightTime = a;
	}

	void SetDaysOfWeek(string s) {
		dayOfWeek = s;
	}

	string GetDestination(){
		return destination;
	}
	string GetAirPlaneModel() {
		return airplaneModel;
	}
	int GetVoyageNumber() {
		return voyageNumber;
	}
	int GetFlightTime() {
		return flightTime;
	}
	string GetDayOfWeek() {
		return dayOfWeek;
	}


	void Show(){
		cout << "Пункт назначения "<< destination << endl;
		cout << "Тип самолета: "<< airplaneModel << endl;
		cout << "Номер рейса: "<< voyageNumber << endl;
		cout << "Время вылета: "<< flightTime << " ч." << endl;
		cout << "День недели: "<< dayOfWeek << endl;
		cout << endl;	
	}
	
};

int main() {
	vector<Aeroflot> planeArray;
	Aeroflot one("Канада", "Пассажирский", 1, 12,"Вторник");
	planeArray.push_back(one);	
	Aeroflot two("Куба", "Грузовой", 55, 4, "Четверг");
	planeArray.push_back(two);
	Aeroflot three("Москва", "Пассажирский", 14, 19, "Суббота");
	planeArray.push_back(three);
	

	for (int i = 0; i < planeArray.size(); i++) {
		if (planeArray[i].GetDestination() == "Москва") {
			planeArray[i].Show();
		}
		else if (planeArray[i].GetDayOfWeek() == "Вторник") {
			planeArray[i].Show();
		}
		else if ((planeArray[i].GetDayOfWeek() == "Четверг")&&(planeArray[i].GetFlightTime() > 5)) {
			planeArray[i].Show();
		}
	}
	return 0;
}



