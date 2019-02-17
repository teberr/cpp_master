#pragma once
class coffeeMachine
{
public:
	int water;
	int coffee;
	int sugar;
	coffeeMachine(int coffee,int water, int sugar);
	~coffeeMachine();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};

