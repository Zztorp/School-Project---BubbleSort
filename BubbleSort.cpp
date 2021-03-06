

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


//Den här funktionen tar in osorterade värden från en fil, sorterar, skriver ut sorterade värden i ny fil 
int bubbleSort() 
{


	/* Datasortering är bra om man tex vill sortera en lista med namn i alfabetisk ordning, eller om man vill sortera datum eller om man bara
		vill veta som i det här fallet vilka tal som är minst till störst.
		Att sortera data underlättar och blir mer effektift när man ska söka i all data*/

	int swap = 0;
	int myArray[10];//Här deklarerar jag en array med 10st indexplatser som rymmer alltså 10st element(Heltal i detta fall). 


	// Läser ifrån en textfil  

	ifstream myFile("text.txt"); /*ifstream är en datatyp som används för att läsa data från filen.
								 Om filen är öppen så skriv ut elementen i indexplatserna |x|x|x|x|x|x|x|x|x|x| (10st platser)
								 */
	if (myFile.is_open())// Kollar om den är öppen
	{
		cout << "****** Innan sortering i myFile: ******" << endl;
		cout << "---------------------------------------" << endl;
		cout << endl;

		for (int i = 0; i < 10; i++)/*En for loop för arrayen. om i är mindre än 10 läs in element för element in i myFile, dom jämförs*/
		{

			myFile >> myArray[i]; // Här läses filen in i min array
			cout << myArray[i] << " | ";


		}
		(myFile.close()); //Stänger filen
	}
	else cout << "Filen skrivs ej ut" << endl;
	{
		cout << endl;
	}
	cout << "\n";
	cout << endl;
	cout << "****** Efter sortering i myFile2: ******" << endl;
	cout << "----------------------------------------" << endl;
	cout << endl;


	//Här är min bubble sort, den sorterar elementen på alla indexplatser i min array

	for (int lindex = 0; lindex < 9; lindex++)
	{
		for (int index = 0; index < 9-lindex; index++)
		{
			if (myArray[index] > myArray[index + 1])/*OM myArrays element med indexplats|0| är större än elementet i indexplats|1|
													Byt plats */
			{
				swap = myArray[index + 1];/* Här jämförs närliggade element i arrayen och byter plats så det elementet med högst värde
				är längst till höger*/
				myArray[index + 1] = myArray[index];
				myArray[index] = swap;
			}
		}
	}




	ofstream myFile2("text2.txt"); /* ofstream är en datatyp som används för att skapa filer och skriva till filer.
								   Här är fil 2 där den sorterade talserien hamnar.*/
	if (myFile2.is_open())
	{

		for (int i = 0; i < 10; i++)// for loopen jämför arrayens element index från 0 till 10
		{
			myFile2 << myArray[i];//Sorterad array går in i fil 2

		}
		(myFile2.close());
	}
	else cout << "Filen skrivs ej ut" << endl;




	for (int index = 0; index < 10; index++)
	{
		cout << myArray[index] << " | "; // Här skrivs den sorterade arrayen ut
	}

	cout << "\n";
	cout << endl;
	cout << "\n";
	cout << endl;
	cout << "\n";
	cout << endl;
	cout << "\n";
	cout << endl;

	return 0; 


}

int bubble()// En funktion som bara skriver ut till consolen
{
	const char heart[] = "\xe2\x99\xa5";
	cout << "oOoOoOoOoO Bubble bubble oOoOoOoOoO\n";// För att jag har deklarerat funktionen till en int och då måste ett int värde retuneras 
	cout << "\n";
	return 0; 
}

int main()
{
	bubble(); 
	bubbleSort();

	return 0;
}
