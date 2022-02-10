//Ralph Daniel Mundin
// Activity : PT1
// Date : February 10, 2022
//Year and Section : BSIE 1-1


#include <iostream>
using namespace std;
int main (){
    int n, rng, ct;
    char ch;

    do{
        cout << "Enter range of numbers: ";
        cin >> rng;
        int i, n, sum=0;
        cout<<"Enter consecutive numbers : ";
        cin>>n;
        cout<<"Enter "<<n<<" consecutive numbers : ";
        for(i=0; i<n; i++)
        {
        cin>>rng;
        sum = sum+rng;
            }
             
        for (int n, ct = 1; ct <= rng; ct++){
            cout << "Enter number " << "[" << ct << "]: ";
            cin >> n;
            if (n % 2 == 0){
            cout << n << " - EVEN number." << endl;
            } else {
            cout << n << " - ODD number." << endl;
            }
        }
            cout << "Try again [y/n]: ";
            cin >> ch;
            cout << endl;
    } while (ch == 'y');
            
    return 0;
}