#include "DangerException.h"
#include<iostream>
void DangerException::ShowError(int OverweightWeight) {
	std::cout << "超重" << std::endl;
	std::cout << "无法再装载重量是" << OverweightWeight << "吨重的集装箱" << std::endl;
	std::cout << "货船将正点启航" << std::endl;
}