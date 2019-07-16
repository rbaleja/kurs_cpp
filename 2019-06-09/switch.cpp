#include <iostream>

//zadanie: dla danego miesiaca x podaj liczbę dni w tym miesiącu

int main()
{
	int msc, rok, dni;
	std::cin >> msc >> rok;
	
// 	std::cout << msc << " " << rok << std::endl;
	
	switch (msc)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			dni = 31;
			break;
		case 2:
			if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
			{
				dni = 29;
			}
			else
			{
				dni = 28;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			dni = 30;
			break;
		default:
			std::cout << "zly miesiac!\n";
			return 1;
	}
	
	std::cout << dni << " dni" << std::endl;
	return 0;
}
