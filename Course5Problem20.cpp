#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

enum enRandomizeChoice{SmallLetter = 1 , CapitalLetter = 2 , SpecialCharecter = 3 , RandomDigit = 4};

char Random(enRandomizeChoice Choice)
{


	switch (Choice)
	{
	case enRandomizeChoice::SmallLetter:
		return char(RandomNumber(97,122));
		break;

	case enRandomizeChoice::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;

	case enRandomizeChoice::SpecialCharecter:
		return char(RandomNumber(33, 47));
		break;

	case enRandomizeChoice::RandomDigit:
		return char(RandomNumber(48, 57));
	}

}

int main()
{
	srand((unsigned)time(NULL));

	cout << Random(enRandomizeChoice::SmallLetter) << "\n";

	cout << Random(enRandomizeChoice::CapitalLetter) << "\n";

	cout << Random(enRandomizeChoice::SpecialCharecter) << "\n";

	cout << Random(enRandomizeChoice::RandomDigit) << "\n";

	return 0;
}