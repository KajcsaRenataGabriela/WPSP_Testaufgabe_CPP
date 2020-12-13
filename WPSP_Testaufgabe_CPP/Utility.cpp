#include <iostream>
#include "CPerson.h"
#include "CFeldSpieler.h"
#include "CFuehrung.h"
#include "CKader.h"
#include "CSpieler.h"
#include "CTorwart.h"
#include "CTrainer.h"
#include "CVerein.h"
using namespace std;

void addFieldPlayer(CKader& kader) {
	cout << "Type his first name!" << endl;
	string name;
	cin >> name;

	cout << "Type his last name!" << endl;
	string vorname;
	cin >> vorname;

	cout << "Type his age!" << endl;
	unsigned int alter;
	cin >> alter;
	while (alter < 0) {
		cout << "Give a realistic age!";
		cin >> alter;
	}

	cout << "Choose his position: " << endl <<
		"  0 = goalkeeper" << endl << " " <<
		" 1 = defence" << endl << " " <<
		" 2 = middleman" << endl << " " <<
		" 3 = attack" << endl;
	unsigned int positionChoice;
	cin >> positionChoice;
	while (positionChoice < 0 || positionChoice > 3)
	{
		cout << " Choose a valid number from the list above!" << endl;
		cin >> positionChoice;
	}

	cout << "Type his players number!";
	unsigned int numberChoice;
	cin >> numberChoice;
	while (numberChoice<0)
	{
		cout << " His number should be a positive one!" << endl;
		cin >> numberChoice;
	}
	if (positionChoice != 0)
	{
		cout << "Edit his strong foot!" << endl <<
			" 0 = unknown" << endl <<
			" 1 = left" << endl <<
			" 2 = right" << endl <<
			" 3 = both" << endl;
		unsigned int starkerFussChoice;
		cin >> starkerFussChoice;
		while (starkerFussChoice < 0 || starkerFussChoice>4)
		{
			cout << "Please choose a number from the list above" << endl;
			cin >> starkerFussChoice;
		}
		
		cout << "Edit defense. Choose a number! " << endl;
		unsigned int verteidigungChoice;
		cin >> verteidigungChoice;

		cout << "Edit ball control. Choose a number! " << endl;
		unsigned int ballBeherrschungChoice;
		cin >> ballBeherrschungChoice;

		cout << "Edit shot power. Choose a number! " << endl;
		unsigned int schussKraftChoice;
		cin >> schussKraftChoice;

		cout << "Edit shot accurancy. Choose a number! " << endl;
		unsigned int schussGenauigkeitChoice;
		cin >> schussGenauigkeitChoice;
	
		CFeldSpieler* newPlayer = new CFeldSpieler(name, vorname, alter, CSpieler::e_position(positionChoice), numberChoice);
		newPlayer->setBallBeherrschung(verteidigungChoice);
		newPlayer->setSchussGenauigkeit(schussGenauigkeitChoice);
		newPlayer->setSchussKraft(schussKraftChoice);
		newPlayer->setStarkerFuss(CFeldSpieler::e_starkerFuss(starkerFussChoice));
		newPlayer->setBallBeherrschung(ballBeherrschungChoice);

		kader.add(*newPlayer);

		cout << "New field player added" << endl << endl ;
	}
	else
	{
		//cout << "Edit penalty room restraint. Choose a number! " << endl;
		//unsigned int strafRaumBeherrschungChoice;
		//cin >> strafRaumBeherrschungChoice;

		//cout << "Edit lines quality. Choose a number! " << endl;
		//unsigned int linienQualitaetChoice;
		//cin >> linienQualitaetChoice;

		//cout << "Edit defense communication. Choose a number! " << endl;
		//unsigned int abwehrKommunikationChoice;
		//cin >> abwehrKommunikationChoice;

		//CTorwart* newPlayer = new CTorwart(name, vorname, alter, CSpieler::e_position(0), numberChoice);

		//newPlayer->setAbwehrKommunikation(abwehrKommunikationChoice);
		//newPlayer->setLinienQualitaet(linienQualitaetChoice);
		//newPlayer->setStrafRaumBeherrschung(strafRaumBeherrschungChoice);
		
		//kader.add(*newPlayer);

		//cout << "New goalkeeper added" << endl << endl;
	}
}

//void addTrainer(CKader& kader) {
//	cout << "Type his first name!" << endl;
//	string name;
//	cin >> name;
//
//	cout << "Type his last name!" << endl;
//	string vorname;
//	cin >> vorname;
//
//	cout << "Type his age!" << endl;
//	unsigned int alter;
//	cin >> alter;
//	while (alter < 0) {
//		cout << "Give a realistic age!";
//		cin >> alter;
//	}
//
//	cout << "Edit defense. Choose a number! " << endl;
//	unsigned int lizenzStufeChoice;
//	cin >> lizenzStufeChoice;
//
//	CTrainer* newTrainer = new CTrainer(name, vorname, alter);
//	newTrainer->setLizenzStufe(lizenzStufeChoice);
//
//	kader.add(*newTrainer);
//
//  cout << "New trainer added" << endl << endl;
//}

void addFuehrung(CKader& kader) {
	cout << "Type his first name!" << endl;
	string name;
	cin >> name;

	cout << "Type his last name!" << endl;
	string vorname;
	cin >> vorname;

	cout << "Type his age!" << endl;
	unsigned int alter;
	cin >> alter;
	while (alter <= 0 || cin.fail()) {
		cout << "Give a realistic age!";
		cin >> alter;
	}

	cout << "Edit his task!" << endl <<
		" 0 = president" << endl <<
		" 1 = managment" << endl <<
		" 2 = sport director" << endl;
	unsigned int aufgabeChoice;
	cin >> aufgabeChoice;
	while (aufgabeChoice < 0 || aufgabeChoice>2)
	{
		cout << "Please choose a number from the list above" << endl;
		cin >> aufgabeChoice;
	}

	CFuehrung* newFuehrung = new CFuehrung(name, vorname, alter, CFuehrung::e_aufgabe(aufgabeChoice));

	kader.add(*newFuehrung);

	cout << "New leadership member added" << endl << endl;
}

int main()
{
	cout << "Welcome to your football game!" << endl << endl;

	CVerein verein;
	CKader kader;
	verein.add(kader);

	unsigned int choice = 0;
	while (choice != 123)
	{
		cout << "If you want to add a new field player -> press 1" << endl
			<< "If you want to add a trainer -> press 2" << endl
			<< "If you want to add someone from leadership -> press 3" << endl
			<< "If you want to see your club -> press 4" << endl
			<< "If you want to exit -> type 123!" << endl;
		cin >> choice;
		while ((choice < 1 || choice > 4) && choice!=123)
		{
			cout << " Choose a valid number from the list above!" << endl;
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			addFieldPlayer(kader);
			break;
		case 2:
			//addTrainer(kader);
			break;
		case 3:
			addFuehrung(kader);
			break;
		case 4:
			kader.print();
			break;
		case 123:
				return 0;
		}
	}

	//CFeldSpieler* barcaFeldSpieler1 = new CFeldSpieler("Lionel", "Messi", 33, CSpieler::e_position(3), 10);
	//CFeldSpieler* barcaFeldSpieler2 = new CFeldSpieler("Antoine", "Griezmann", 29, CSpieler::e_position(3), 7);
	//CFeldSpieler* barcaFeldSpieler3 = new CFeldSpieler("Philippe", "Countihno", 28, CSpieler::e_position(2), 3);
	//CFeldSpieler* barcaFeldSpieler4 = new CFeldSpieler("Ousmane", "Dembélé", 23, CSpieler::e_position(3), 11);

	//CFuehrung* fuehrung1 = new CFuehrung("Lala", "La", 50, CFuehrung::e_aufgabe(1));

	CTrainer* trainer1 = new CTrainer("Trainer", "Trainee", 35);

	//barcaFeldSpieler1->setBallBeherrschung(2);

	////CTorwart torwart("Norberto", "Neto", 31, CSpieler::e_position(3), 13); // ----> does not work, i don't know why

	//kader.add(*barcaFeldSpieler1);
	//kader.add(*barcaFeldSpieler2);
	//kader.add(*barcaFeldSpieler3);
	////kader.add(*trainer1);
	//verein.add(*fuehrung1);
	////kader.add(torwart);
	//kader.print();
}