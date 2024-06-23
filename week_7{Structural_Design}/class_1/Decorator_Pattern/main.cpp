#include<iostream>
#include<algorithm>
#include "ICar.h"
using namespace std;

int main(){
    ICar *scorpio = new Scorpio();
    ICar *bulletProofScorpio = new BulletProofCar(scorpio);

    float weight = bulletProofScorpio->GetWeight();
    cout<<"The Weight of the Bulletproof Scorpio is : "<<weight<<endl;

}