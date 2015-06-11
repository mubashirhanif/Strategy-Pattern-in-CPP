#include "duck.h"
/*
	Duck.cpp
*/

//constructor
Duck::Duck(){

}
void Duck::setFlyBehaviour(FlyBehaviour *fb){
	this->fly = fb;
}

void Duck::setQuackBehaviour(QuackBehaviour *qb){
	this->quack = qb;
}
void Duck::Quack(){
	this->quack->quack();
}
void Duck::Fly(){
	this->fly->fly();
}


