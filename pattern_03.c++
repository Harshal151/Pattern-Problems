#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Write a Program to print mirrored right triangle star pattern." << endl;
    cout << "For example --->>>" << endl;
    cout << "    *" << endl;
    cout << "   **" << endl;
    cout << "  ***" << endl;
    cout << " ****" << endl;
    cout << "*****" << endl;
    cout << "Enter the number: ";
    cin >> Num;
    for(int i=0;i<Num;i++){
        for(int j=0;j<Num;j++){
            if(i+j<=Num-2){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
