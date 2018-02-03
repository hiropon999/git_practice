//練習
// c++ はオブジェクト指向プログラミングをサポートしたプログラミング言語である
#include <ctime> // 乱数
#include <cstdlib> // 乱数
#include<iostream>
#include <string>

using namespace std;

int main(){
    // cout=標準出力ストリーム
    cout <<"Hello world \n";
    cout <<"\a 警報";

    int x,y;
    x = 10;
    y = 50;

    cout << "x = " << x << "です \n";
    cout << "y = " << y << "です \n";
    cout << "x + y = " << x + y <<"\n";

    int a,b;
    cout << "aとbの演算：値を代入してください\n";
    cout << "aの値:";
    cin >> a; //aの値代入 cin=入力ストリーム
    cout << "bの値:";
    cin >> b; // bの値代入　cin = 入力ストリーム
    cout << "a * b =" << a*b << "\n" ;

    cout << "符号反転:a";
    int c = -a; // これは代入ではなく初期化
    cout << +a <<"の反転符号は" << c << "です";

    double d,e,f=0;
    cout << "double 型テスト:値を代入\n";
    cout << "d の値:";
    cin >> d;
    cout <<"eの値:";
    cin >> e;
    f = d + e; // これは初期化ではなく代入

    /*円の計算を表示,定値オブジェクト使用
    メリット
    1:管理を１箇所に集約
    2:読みやすいソース
    */
    const double PI = 3.1415;
    double r;
    cout <<"半径の値r:";
    cin >> r; // 入力ストリーム
    cout << "演習の長さは" << 2 * PI * r <<"\n";
    cout << "円の面積は" << PI * r * r  <<"\n";
    /* srand() は擬似乱数で種を変更するには時刻を引数にとるのが一般的
        モンハンでもお守りマラソンに使用されていた(起動からの時間?)
        rand() は乱数の数値が決まっているため上記を扱うこと(実行結果が同じになる) */
    srand(time(NULL));// 乱数設定
    int g = rand()%10; // 0~9の値
    int h = 1 + rand() % 9;// 1~9
    int i = 5 + rand() % 10; // 5~14
    int j = rand() % 10;// 0 ~ 9

    string name; // 文字列格納用
    cout << "空白文字列も入れて文字列を入力せよ(cin <<)";
    cin >> name; // 抽出子>>　では空白文字が入るとそれ以降は読み込まれない 
    cout << "入力された文字列は" << name << ":\n";

    cout << "空白文字列も入れて文字列を入力せよ(getline)";
    string name_1;
    getline(cin,name_1);

}