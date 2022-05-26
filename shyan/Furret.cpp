#include "Furret.h"
#include<iostream>
void Furret::Surf() {
	std::cout << "大尾立在冲浪"<<std::endl;
}
void Furret::Cut() {
	std::cout << "大尾立使用了居合斩" <<std:: endl;
}
void Furret::Skill() {
	Surf();
	Cut();
}
Furret::Furret() :Pokemon(10, 20, 30, 40, 50) {

}
void Furret::Eat() {
	std::cout << "大尾立在吃饭" << std::endl;
		
}