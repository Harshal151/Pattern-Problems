#include <iostream>
using namespace std;
int main()
{
    int Num;
    int sim_sum;
    cout << "Write a Program to print the Inverted Half Pyramid Star Pattern." << endl;
    cout << "For example --->>>" << endl;
    cout << "*****" << endl;
    cout << " ****" << endl;
    cout << "  ***" << endl;
    cout << "   **" << endl;
    cout << "    *" << endl;
    cout << "Enter the number: ";
    cin >> Num;
    for(int i=0;i<Num;i++){
        for(int j=0;j<Num;j++){
            if(i==j){
                sim_sum = i+j;
            }
            if(i==j || i+j>sim_sum){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        sim_sum = sim_sum + 2;
        cout << endl;
    }
    return 0;
}
