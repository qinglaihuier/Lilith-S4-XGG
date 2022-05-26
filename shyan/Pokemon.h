#pragma once
class Pokemon {
private:
	int ATK;
	int defense;
	int Speed;
	int Hp;
	int Level;
public:
	Pokemon(int a,int b,int c,int d,int e);
	
	~Pokemon();
	virtual void Cut() ;
	virtual void Surf();
	virtual void Eat();
	virtual void Skill() ;
};
