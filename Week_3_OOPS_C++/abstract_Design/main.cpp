#include<iostream>
using namespace std;
#include "bird.h"

void birdDoThis(Bird *&bird){
    bird->eat();
    bird->fly();
}

int main(){
    Bird *bird = new Sparrow();
    birdDoThis(bird);
    Bird *bird2 = new Pigen();
    birdDoThis(bird2);

    // if try to call directly from sparrow u can't 
    Sparrow *sp = new Sparrow();
    sp->eat();
}