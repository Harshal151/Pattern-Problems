#include <iostream>

using namespace std;

int main()
{
    int Num;
    cout << "Pattern Matching 1...." << endl;
    cout << "First example --->>>" << endl;
    cout << "*" << endl;
    cout << "**" << endl;
    cout << "***" << endl;
    cout << "****" << endl;
    cout << "*****" << endl;
    cout << "Enter the number: ";
    cin >> Num;
    for(int i=0;i<Num;i++){
        for(int j=0;j<Num;j++){
            if(i==j){
                cout << "*";
                break;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
