#include<string>
#include<iostream>
std::string Countables = "0123456789";
std::string Alphabet_T = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
std::string Alphabet_S = "abcdefghijklmnopqrstuvwxyz";
std::string Comparable;
void InitSpellTest();
void CompareTest();

int main() 
{
	//Program
	std::cout << "Cypher Test V0.0" << std::endl;
	// Testing the Spells
	InitSpellTest();
	//Compare a custom string 
	CompareTest();

	system("Pause");
}

void InitSpellTest(){
	for (int Position = 0; Position < Countables.length(); Position++) {
		std::cout << Countables[Position] << ' ';
	}
	std::cout << std::endl;
	for (int Position = 0; Position < Alphabet_T.length(); Position++) {
		std::cout << Alphabet_T[Position] << ' ';
	}
	std::cout << std::endl;
	for (int Position = 0; Position < Alphabet_S.length(); Position++) {
		std::cout << Alphabet_S[Position] << ' ';
	}
	std::cout << std::endl;
	std::cout << "InitSpellTest() Done!" << std::endl;
}

void CompareTest() {
	std::cin >> Comparable;
	int i2 = 0;
	int CL = Comparable.length();
	for (i2; i2 < CL; i2++) {
		for (int i = 0; i < Alphabet_T.length(); i++){
			if (Alphabet_T[i] == Comparable[i2]){
				std::cout << i << ' ';
			}
		}
	}
	std::cout << "CompareTest() Done!" << std::endl;
}