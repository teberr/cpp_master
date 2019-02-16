#include "stdafx.h"
#include "Tower.h"

Tower::Tower() {
	height = 1;
}

Tower::Tower(int num)
{
	height = num;

}

Tower::~Tower()
{
}

int Tower::getHeight() {
	return height;
}
