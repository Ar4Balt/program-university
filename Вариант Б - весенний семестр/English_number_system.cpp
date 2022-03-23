#include <iostream>

class English_number_system
{
private:
	int feet;
	float inches;

public:
	English_number_system() : feet(0), inches(0.0) {}		//Defuald constructor
	English_number_system(int ft, float in) : feet(ft), inches(in) {}

	void get_distance()
	{
		std::cout << "Enter number feet: "; std::cin >> feet;
		std::cout << "Enter number inches: "; std::cin >> inches;
	}
	void show_distance()
	{
		std::cout << feet << "\'-" << inches << "\"";
	}
	void sum(English_number_system, English_number_system);
	void subtraction(English_number_system, English_number_system);
};

void English_number_system::sum(English_number_system d1, English_number_system d2)
{
	inches = d1.inches + d2.inches;
	feet = 0;
	while (true)
	{
		if (inches >= 12.0)
		{
			inches -= 12.0;
			feet--;
		}
		else { break; }
	}
	feet += d1.feet + d2.feet;
}
void English_number_system::subtraction(English_number_system d1, English_number_system d2)
{
	inches = d1.inches - d2.inches;
	feet = 0;
	while (true)
	{
		if ((inches >= 12.0 || inches >= 12.0) && (inches >= 12.0 || inches >= 12.0))
		{
			inches -= 12.0;
		}
		else { break; }
	}
	feet -= d1.feet - d2.feet;
}

int english_number_system()
{
	English_number_system distance3,
		distance1(2, 6.25), 
		distance2(9, 11.89);

	distance3.sum(distance1, distance2);
	std::cout << "\ndistance1: "; distance1.show_distance();
	std::cout << "\ndistance2: "; distance2.show_distance();
	std::cout << "\ndistance3: "; distance3.show_distance();
	std::cout << std::endl;

	return 0;
}