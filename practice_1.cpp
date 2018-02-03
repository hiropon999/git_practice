//practice 
#include <iostream>

using namespace std;

int main(){
    int a,b;

    cout << "変数a : ";
    cin >> a;
    cout << "変数b : ";
    cin >> b;

    if(a == b){
        cout <<"2つの値は同じ\n";
    }else{
        if(a < b){
            int t = a;
            a = b;
            b = t;
        }
        cout << "a > b となるようにソート \n";
        cout << "aの値は:" << a << "です\n";
        cout << "bの値は:" << b << "です\n";

    }
        cout <<"閏年チェッカー";
    int x;
    cout << "年を入力";
    cin >> x;
    cout <<"その年は閏年";
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0){
        cout <<"です\n";
    }else{
        cout << "でありません\n";
    }
}