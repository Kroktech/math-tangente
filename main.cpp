#include <iostream>
#include <cmath>
#include <vector>


int main()
{

	std::vector<int>number;
	int Degre_du_polynome= 0;
	std::cout << "degre du polynome : ";
	std::cin >> Degre_du_polynome;
	for (int i = 0; i < Degre_du_polynome+1; ++i)
	{
		int tmp = 0;
		std::cout << "entrez un nombre : ";
		std::cin >> tmp;
		number.push_back(tmp);
	}
	int x;
	std::cout << "en quel point voulez vous l'equation de la tangante : ";
	std::cin >> x;
	int puissance = Degre_du_polynome;
	
	int f = 0;
	int f_prime = 0;
	for (int i = 0; i < number.size(); ++i)
	{
		if (puissance != 0)
		{
			f = f + number[i] * pow(x, puissance);
			--puissance;
		}
		else
			f = f + number[i];
		

	}
	puissance = Degre_du_polynome;
	for (int i = 0; i < number.size()-1 ; ++i)
	{
		f_prime = f_prime + number[i] * puissance * pow(x, puissance - 1);
		--puissance;
	}
	int result = f_prime * -x + f;
	char op = '+';
	if (result < 0)
		op = ' ';
	std::cout << "equation de tangente \n" << "y = " << f_prime << "x"<<op<< result ;
	return 0;
}
