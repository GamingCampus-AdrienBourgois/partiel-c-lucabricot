#pragma once

#include <string>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

class Solution2 // Bank Account
{
public:
	static float GetBalance(const std::string& accountName);
};


int action() { //fonction qui s'occupe des transactions

	if (monFlux)
	{
		cout << "Quelle action voulez vous effectuer ?\n";
		cout << "1. Déposer\n";
		cout << "2. Retirer\n";

		cin >> c1;


		if (c1 == 1) {
			cout << "Veuillez entrer la somme que vous souhaitez déposer.\n";
			cin >> dep;
			monFlux << dep << endl;
		}

		else if (c1 == 2) {
			cout << "Veuillez entrer la somme que vous souhaitez retirer.\n";
			cin >> wd;
			monFlux << wd << endl;
		}

	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
	}

}


int main() {


	cout << "Quel est votre compte client ?\n";
	cout << "1. 159874\n";
	cout << "2. 784512\n";
	cout << "3. 159874\n";
	cout << "4. 846326\n";
	cout << "5. 968521\n";
	cin >> choice;

	if (choice == '1') {
		string const nomFichier("C:/BankAccount/159874.txt");
		ofstream monFlux(nomFichier.c_str());
		
		action();

	}

	if else (choice == '2') {
		string const nomFichier("C:/BankAccount/784512.txt");
		ofstream monFlux(nomFichier.c_str());
		
		action();

	}
	
	if else (choice == '3') {
		string const nomFichier("C:/BankAccount/159874.txt");
		ofstream monFlux(nomFichier.c_str());


		action();
	}

	if else (choice == '4') {
		string const nomFichier("C:/BankAccount/846326.txt");
		ofstream monFlux(nomFichier.c_str());


		action();
	}

	if else (choice == '5') {
		string const nomFichier("C:/BankAccount/968521.txt");
		ofstream monFlux(nomFichier.c_str());


		action();
	}

	return 0;
}

#endif
