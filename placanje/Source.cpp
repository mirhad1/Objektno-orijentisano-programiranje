#include <iostream>
#include "Kupac.h"
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int main() {
	vector <Kupac> kp;
	int izbor;
	do {
		cout << "1. Unos kupca\n";
		cout << "2. Unos placanja\n";
		cout << "3. Ukupan iznos placanja po kupcu\n";
		cout << "0. Izadjite iz programa\n";
		cout << "Unesite vas izbor: ";
		cin >> izbor;
		
		switch (izbor)
		{
		case 1: {
			std::shared_ptr<Kupac> temp = std::make_shared<Kupac>();
			temp->setId();
			cin.ignore();
			temp->setIme();
			temp->setPrezime();
			kp.push_back(*temp);
			break;
		}
		case 2:
			int x;
			for (int i = 0; i < kp.size(); i++) {
				cout << i << " " << kp[i].getId() << " " << kp[i].getIme() << " " << kp[i].getPrezime() << std::endl;
			}
			cout << "Unesite broj kupca: ";
			cin >> x;
			kp[x].dodajPlacanje();
			break;
		case 3:
			for (int i = 0; i < kp.size(); i++) {
				cout << "Ime: " << kp[i].getIme() << !kp[i] << std::endl;
			}
			break;
		default:
			break;
		}


	} while (izbor != 0);


	return 0;
}