#include "Lapras.h"
#include<iostream>
void Lapras::Surf() {
	std::cout << "拉普拉斯在冲浪"<<std::endl;
}
void Lapras::Skill() {
	Surf();
}
Lapras::Lapras():Pokemon(50,60,30,20,100) {

}
void Lapras::Eat() {
	std::cout << "拉普拉斯在吃饭" << std::endl;
}
void Lapras::Cut() {
	std::cout << "拉普拉斯使用了居合斩" << std::endl;
}