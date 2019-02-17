#include "stdafx.h"
#include "coffeeMachine.h"
#include <iostream>
using namespace std;

coffeeMachine::coffeeMachine(int coffee,int water, int sugar)
{
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}


coffeeMachine::~coffeeMachine()
{
}
void coffeeMachine::drinkEspresso(){
	int state = 1;
	if (this->water < 1) {
		cout << "water is not enough!" << endl;
		state = 0;
	}
	if (this->coffee < 1) {
		cout << "coffee is not enough!" << endl;
		state = 0;
	}

	if (state) {
		this->water--;
		this->coffee--;
		cout << "Espresso is ready!" << endl;
	}


}
void coffeeMachine::drinkAmericano(){
	int state = 1;
	if (this->water < 2) {
		cout << "water is not enough!" << endl;
		state = 0;
	}
	if (this->coffee < 1) {
		cout << "coffee is not enough!" << endl;
		state = 0;
	}

	if (state) {
		this->water=this->water-2;
		this->coffee--;
		cout << "Americano is ready!" << endl;
	}
}
void coffeeMachine::drinkSugarCoffee() {
	int state = 1;
	if (this->water < 2) {
		cout << "water is not enough!" << endl;
		state = 0;
	}
	if (this->coffee < 1) {
		cout << "coffee is not enough!" << endl;
		state = 0;
	}
	if (this->sugar < 1) {
		cout << "sugar is not enough!" << endl;
		state = 0;
	}

	if (state) {
		this->water = this->water - 2;
		this->coffee--;
		this->sugar--;
		cout << "SugarCoffee is ready!" << endl;
	}
}
void coffeeMachine::show(){
	cout << "--------- coffeeMachine state -------------" << endl;
	cout << "coffee :" << coffee << '\n' << "water : " << water << '\n' << "sugar : " << sugar << endl;
}
void coffeeMachine::fill() {
	this->water = 10;
	this->coffee = 10;
	this->sugar = 10;
}
