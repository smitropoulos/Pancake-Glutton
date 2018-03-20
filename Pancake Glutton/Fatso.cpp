//
//  Fatso.cpp
//  Pancake Glutton
//
//  Created by Stefanos Mitropoulos on 20/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Fatso.hpp"

Fatso::Fatso(){}
Fatso::~Fatso(){}
Fatso::Fatso (std::string name,unsigned int pancakes, unsigned int order){}

unsigned int Fatso::getOrder(){return _order;}
unsigned int Fatso::getPancakesEaten(){return _pancakesEaten;}
std::string Fatso::getName(){return _name;}

void Fatso::setOrder(unsigned int order){_order=order;};
void Fatso::setPancakesEaten(unsigned int pancakesEaten){_pancakesEaten=pancakesEaten;}
void Fatso::setName(std::string name){_name=name;}

