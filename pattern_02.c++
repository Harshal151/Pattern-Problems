#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Write a Program to print an inverted right triangle star pattern." << endl;
    cout << "For example --->>>" << endl;
    cout << "*****" << endl;
    cout << "****" << endl;
    cout << "***" << endl;
    cout << "**" << endl;
    cout << "*" << endl;
    cout << "Enter the number: ";
    cin >> Num;
    for(int i=0;i<Num;i++){
        for(int j=0;j<Num;j++){
            if(i+j<=Num-1){
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
