#include<iostream>
#include<Windows.h>

using namespace std;

class mammals
{

	virtual void Print() = 0;
	virtual void describe() = 0;

};

class animals : public mammals
{
private:

	string predators, herbivorous;

public:

	animals(string predators,string herbivorous)
	{
		this->predators = predators;
		this->herbivorous = herbivorous;
		
	}

	void describe() override
	{
		
	}

	void Print() override
	{
		cout << "\tAnimals \n" <<"Predators: " << predators <<"\nHerbivorous: "<<herbivorous <<  endl;
	}

};

class people : public mammals
{
private:
	string men, women;

public:

	people(string men,string women)
	{
		this->men = men;
		this->women = women;
	}


	void describe() override
	{
		cout <<"Description:\n" << men << " is 27.He's tall and clever" << "\n" << women << " is 24.She's cute and sociable" << endl;
	}

	void Print() override
	{
		cout << "\n\tPeople \n" <<"Men: " << men <<"\nWomen: " << women << endl << endl;
	}

};

class horses : public mammals
{
private:
	string arabic,azorsky,canadian;
	

public:

	horses(string arabic,string azorsky,string canadian)
	{
		this->arabic = arabic;
		this->azorsky = azorsky;
		this->canadian = canadian;
	}

	void describe() override
	{
		cout << "Description:" << endl;
		cout << "The Arabian horse is the longest-lived among domestic horse breeds." << endl;
		cout << "Some call azorsky as a class horse, his appearance, quality, style, or charm, his every move cuts through the air" << endl;
		cout << "The Canadian horse has large, expressive eyes, a rather long, muscular neck and a well-structured head with elegant ears" << endl;
	}

	void Print() override
	{
		cout << "\n";
		cout << "\tHorses \n" << arabic << "\n" << azorsky << "\n" << canadian << endl << endl;
	}


};
class cows : public mammals
{
private:
	string dutch,yaroslavl,ayrshire;
public:
	cows(string dutch, string yaroslavl, string ayrshire)
	{
		this->dutch = dutch;
		this->yaroslavl = yaroslavl;
		this->ayrshire = ayrshire;
	}
	void Print() override
	{
		cout << "\n\tCows"<<"\n"<< dutch <<"\n"<< yaroslavl <<"\n"<< ayrshire << endl;
	}
	void describe() override
	{
		cout << "\nDescribtion:" << endl;
		cout << "Dutch cow's body is wide, deep, with a well-developed rear" << endl;
		cout << "The main color of the yaroslavl cow is black, the head is white with black spots around the eyes" << endl;
		cout << "The color is red and mottled. Ayrshire cows are characterized by lyre-shaped horns" << endl;
	}
};

int main()
{
	system("color 3");

	animals ani("Lions","Zebras");
	ani.Print();

	people peo("John","Vladislava");
	peo.Print();
	peo.describe();

	horses hor("Arabic","Azorsky","Canadian");
	hor.Print();
	hor.describe();

	cows cow("Dutch","Yaroslavl","Ayrshire");
	cow.Print();
	cow.describe();

	system("pause");
	return 0;
}