//
//  main.cpp
//  Pancake Glutton
//
//  Created by Stefanos Mitropoulos on 20/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include <iostream>
#include "Fatso.hpp"
#include <algorithm>

bool ValueCmp(Fatso & a, Fatso & b)		//need to define a comparator for the classes.
{
	return a.getPancakesEaten() < b.getPancakesEaten();
}


int main(int argc, const char * argv[]) {

	Fatso arrayOfpeople[10];
	int numberOfPeople = 3;

	for (int i =0 ; i < numberOfPeople ; i++){
		std::cout<<"Please input a name and the number of pancakes: ";
		std::string name;
		unsigned int pancakes;
		std::cin>>name>>pancakes;
		arrayOfpeople[i].setName(name);
		arrayOfpeople[i].setPancakesEaten(pancakes);
		arrayOfpeople[i].setOrder(i);
		std::cout<<std::endl;

	}


	std::sort(arrayOfpeople, arrayOfpeople + numberOfPeople, ValueCmp);	//STL sort super useful shit

	for (int i =0 ; i < numberOfPeople ; i++){
		std::cout<<
		arrayOfpeople[i].getName()
		<<" "
		<<arrayOfpeople[i].getPancakesEaten()
		<<" "
		<<arrayOfpeople[i].getOrder()
		<<std::endl;

	}

		return 0;
}
