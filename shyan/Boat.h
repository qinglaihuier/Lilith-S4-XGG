#pragma once
#include"DangerException.h"
class CargoBoat :public virtual DangerException
{
private:
	int CargoWeight;   //货物重量
public:
	int AddCargo(int newCargoBoat);
	void loading(int OverweightWeight);
	CargoBoat();
};
