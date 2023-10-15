#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;


    // Pattern 1:
    // ***
    // ***
    // ***
    // int i = 1;
    // while (i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }




    // Pattern 2:
    // 111
    // 222
    // 333

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << i;
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }



    // Pattern 2 (reverse):

    // 333
    // 222
    // 111

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << n-i+1;
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // Pattern 3:
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4


    // int i = 1;
    
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
            
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 4:
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << n-j+1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // Pattern 5:
    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16

    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }



    // Pattern 6:
    // *
    // **
    // ***
    // ****

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }



    // Pattern 7:
    // 1
    // 22
    // 333
    // 4444

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // Pattern 8:
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 9:
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // 5 6 7 8 9

    // int i = 1;

    // while(i<=n){
    //     int j = 1;
        
    //     while(j<=i){
    //         cout << i+j-1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // Pattern 10:
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout << i-j+1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // Pattern 11:

    // A A A A
    // B B B B
    // C C C C
    // D D D D

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         int ch = 'A' + i-1;
    //         cout << (char)ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
}