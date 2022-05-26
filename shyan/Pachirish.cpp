
#include"Pachirish.h"
#include <iostream>
Pachirish::Pachirish():Pokemon(30,50,60,100,20) {

}
Pachirish::Pachirish(int a, int b, int c, int d, int e):Pokemon(a,b,c,d,e) {

}
void Pachirish::Cut() {
	std::cout << "ÅÁÆæÀè×ËÊ¹ÓÃÁË¾ÓºÏÕ¶" << std::endl;
}
void Pachirish::Eat() {
	std::cout << "ÅÁÆæÀû×ÈÔÚ³Ô·¹"<<std::endl;
}
void Pachirish::Skill() {
	Cut();
}
void Pachirish::Surf() {
	std::cout << "ÅÁÆæÀû×ÈÔÚ³åÀË" << std::endl;
}