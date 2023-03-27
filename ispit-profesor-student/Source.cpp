#include<iostream>
#include<vector>
#include "Ispit.h"
#include<memory>
std::vector<Ispit>ispiti;
std::vector<Student>studenti;
using std::cout;
using std::cin;
void unosIspita() {
	Ispit temp;
	temp.setNaziv();
	temp.setDatumIspita();
	temp.setProfesor();
	ispiti.push_back(temp);
	
	cin.ignore();
}
void listaIspita() {
	cout << "R.br. Naziv   Datum     Profesor\n";
	for (int i = 0; i < ispiti.size(); i++) {
		cout << i + 1 << " " << ispiti[i].getNaziv() << " " <<
			ispiti[i].getDatumIspita() << " ";
		ispiti[i].getProfesor();
		cout << "\n";
	}
}
void unosStudenta() {
	listaIspita();
	int brIspita;
	cout << "Unesite broj ispita za koji se student unosi:";
	cin >> brIspita;
	cin.ignore();

	std::unique_ptr<Student> temp = std::make_unique<Student>();
	cin >> *temp;
	int br=0;
	
	do {
		for (int i = 0; i < ispiti.size(); i++) {
				ispiti[brIspita - 1].getNaziv();
				ispiti[brIspita - 1].setOcjene();
				
				br++;
		}
	} while (br>1);	
	studenti.push_back(*temp);
	
}

void srednjaOcjena() {
	listaIspita();
	int odabir;
	cout << "Odabir ispita:";
	cin >> odabir;
	cin.ignore();
	Ispit ispit;
	for (int i = 0; i < ispiti.size(); i++) {
		if (ispiti[odabir - 1].getOcjene() == ispiti[i].getOcjene()) {
			cout<<"Srednja ocjena odabranog predmeta: "<<!ispit<<"\n";
		};
	};


}
void ispisIspita() {
	listaIspita();

	for (int i = 0; i < studenti.size(); i++) {
		studenti[i].ispis();
		ispiti[i].getOcjene();
		cout << "\n";


	}
}

void ispisOcjena() {
	int brIndeksa;
	cout << "Unesite broj indeksa studenta:";
	cin >> brIndeksa;
	for (int i = 0; i < studenti.size(); i++) {
		if (brIndeksa == studenti[i].getBrIndeksa()) {
			for (int j =0 ; j < ispiti.size(); j++) {
				cout << ispiti[j].getNaziv();
				 ispiti[j].getOcjene();
			}
		}
	}
}








int main() {
	int izbor;
	Ispit i;
	do {
		cout << "\t::Meni::\n";
		cout << "1.Unos ispita\n";
		cout << "2.Unos studenta\n";
		cout << "3.Srednja ocjena predmeta\n";
		cout << "4.Ispis ispita\n";
		cout << "5.Ispis ocjena studenta\n";
		cout << "6.Kraj\n";
		cout << "Izbor: ";
		cin >> izbor;
		cin.ignore();
		system("cls");
		switch (izbor)
		{
		case 1:
			unosIspita();
			system("cls");
			system("pause");
			break;
		case 2:
			unosStudenta();
			system("pause");
			system("cls");
			break;
		case 3:
			srednjaOcjena();
			system("pause");
			system("cls");
			break;
		case 4:
			ispisIspita();
			system("pause");
			system("cls");
			break;
		case 5:
			ispisOcjena();
			system("cls");
			system("pause");
			break;
		case 6:
			system("pause");
			break;
		default:
			break;
		}


	} while (izbor != 6);

	return 0;
}