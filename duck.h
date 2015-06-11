#include "QuackBehaviour.h"
#include "FlyBehaviour.h"
class Duck{
	public:
		QuackBehaviour *quack;
		FlyBehaviour *fly;
	public:
		virtual void display() = 0;
		void setQuackBehaviour(QuackBehaviour *qb);
		void setFlyBehaviour(FlyBehaviour *fb);
		Duck();
		void Quack();
		void Fly(); 
}; 
