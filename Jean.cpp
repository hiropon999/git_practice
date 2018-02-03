//じゃんけん
#include<iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

int main(){
    int hand;
    cout << "手を選んでください(0...グー/1...チョキ/2...パー)\n";
    cin >> hand;
if(hand < 0 || 2 < hand){
        cout << "指定された数値を入力してください\n";
    }else{
        cout << "じゃんけーん\n";
    }

    switch(hand){
        case 0: cout <<"user:グー\n"; break;
        case 1: cout <<"user:チョキ\n"; break;
        case 2: cout <<"user:パー\n"; break;
    }

    srand(time(NULL));
    int cpu = rand() % 3;
    switch(cpu){
        case 0: cout <<"cpu:グー\n"; break;
        case 1: cout <<"cpu:チョキ\n"; break;
        case 2: cout <<"cpu:パー\n"; break;
    }

    if((hand==0 && cpu==1) || (hand==1 && cpu==2) || (hand==2 && cpu==0)){
        cout << "userの勝ち\n";
    }else if(hand == cpu){
        cout << "あいこです\n";
    }else{
        cout << "cpuの勝ち\n";
    }


}