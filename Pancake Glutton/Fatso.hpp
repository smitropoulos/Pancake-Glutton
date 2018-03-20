//
//  Fatso.hpp
//  Pancake Glutton
//
//  Created by Stefanos Mitropoulos on 20/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Fatso_hpp
#define Fatso_hpp

#include <stdio.h>
#include <iostream>

class Fatso{
private:
	std::string _name = "";
	unsigned int _pancakesEaten = 0;
	unsigned int _order=0;
public:
	Fatso();
	~Fatso();
	Fatso (std::string name,unsigned int pancakes, unsigned int order);


	//methods

	unsigned int getOrder();
	unsigned int getPancakesEaten();
	std::string getName();

	void setOrder(unsigned int order);
	void setPancakesEaten(unsigned int pancakesEaten);
	void setName(std::string name);


};

#endif /* Fatso_hpp */
