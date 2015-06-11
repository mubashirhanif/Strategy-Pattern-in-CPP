#include "MallardDuck.h"
#include "SimpleQuack.h"
#include "FlyWithWings.h"
#include "AnotherQuack.h"

int main(){
	Duck *d = new MallardDuck();
//	QuackBehaviour *qb = new SimpleQuack();
//	FlyBehaviour *fb = new FlyWithWings();
	d->setFlyBehaviour(new FlyWithWings());
	d->setQuackBehaviour(new SimpleQuack());
	d->Fly();
	d->Quack();
	d->setQuackBehaviour(new AnotherQuack());
	d->Quack();
	return 0;
}
