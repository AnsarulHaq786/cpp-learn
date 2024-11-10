#include<math.h>
#include<iostream>
using namespace std;
void pattern1(int n){
    /*
    * * * *
    * * * *
    * * * *
    * * * *
    */
    int j;
    for(int i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    /*
        *
        * *
        * * *
        * * * *
        * * * * *
    */
    int j;
    for(int i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    /*
        1 
        1 2 
        1 2 3 
        1 2 3 4 
        1 2 3 4 5 
    */
    int j;
    for(int i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    /*
        1 
        2 2 
        3 3 3 
        4 4 4 4 
        5 5 5 5 5 
    */
    int j;
    for(int i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    /*
        * * * * *
        * * * *
        * * *
        * *
        * 
    */
    int j;
    for(int i=0; i<n; i++){
        for(j=i; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    /*
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
    */
    int j;
    for(int i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    /*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    */
    int j,k;
    for(int i=0; i<n; i++)
    {
        for(k=0; k<n-i-1; k++){
            cout<<"  ";
        }
        for (j=0; j<i*2+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    /*
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
           *
    */
    int j,k;
    for(int i=0; i<n; i++)
    {
        for(k=0; k<i; k++){
            cout<<"  ";
        }
        for (j=0; j<(n-i-1)*2+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    } 
}

void pattern9(int n){
    /*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
           *
    */ 
   pattern7(n);
   pattern8(n);
}

void pattern10(int n){
    /*
        *
        * *
        * * *
        * * * *
        * * * * *
        * * * *
        * * * 
        * *
        * 
    */
//    pattern2(n-1);
//    pattern5(n);
    int j, stars=0;
    for(int i=0; i<2*n-1; i++){
        stars = i+1;
        if(i>=n)
            stars = 2*n-i-1;
        for(j=0; j<stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    /*
        1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1
    */
    int j, start=0;
    for(int i=0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(j=0; j<i+1; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    /*
        1      1
        12    21
        123  321
        12344321
    */
   int j,k;
   for(int i=0; i<n; i++){
    for(j=0; j<i+1; j++){
        cout<<j+1;
    }
    for(k=0; k<2*(n-i-1); k++){
        cout<<" ";
    }
    for(j=i+1; j>0; j--){
        cout<<j;
    }
    cout<<endl;
   }
}

void pattern13(int n){
    /*
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15  
    */
   int j, start=1;
   for(int i=0; i<n; i++){
    for(j=0; j<i+1; j++){
        cout<<start<<" ";
        start++;
    }
    cout<<endl;
   }
}

void pattern14(int n){
    /*
        A
        AB
        ABC
        ABCD
        ABCDE
    */
   char start;
    for(int i=0; i<n; i++){
        for(start='A'; start<'A'+(i+1); start++){
            cout<<start;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    /*
    ABCDE
    ABCD
    ABC
    AB
    A
    */
   int j;
   for(int i=0; i<n; i++){
    char start = 'A';
    for(j=n-i; j>0; j--){
        cout<<start;
        start++;
    }
    cout<<endl;
   }
}

void pattern16(int n){
    /*
        A
        BB
        CCC
        DDDD
        EEEEE
    */
   int j;
   char start;
   for(int i=0; i<n; i++){
    start='A'+i;
    for(j=0; j<i+1; j++){
        cout<<start;
    }
    cout<<endl;
   }
}

void pattern17(int n){
    /*
       A
      ABA
     ABCBA
    ABCDCBA
    */
   int j,k;
   char start;
   for(int i=0; i<n; i++){
    start = 'A';
    for(k=n-1; k>i; k--){
        cout<<" ";
    }
    for(j=0; j<2*i+1; j++){
        cout<<start;
        if(j<i) start++;
        else start--;
    }
    cout<<endl;
   }
}

void pattern18(int n){
    /*
        E
        D E
        C D E
        B C D E
        A B C D E
    */
   int j;
   char start;
   start = 'E';
   for(int i=0; i<n; i++){
    for(j=0; j<i+1; j++){
        cout<<char(start+j);
    }
    start--;
    cout<<endl;
   }
}

void upper(int n){
    int j,k;
    for(int i=0; i<n; i++){
        for(j=n; j>i; j--){
            cout<<"*";
        }
        for(k=0; k<2*i; k++){
            cout<<" ";
        }
        for(j=n; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void upper20(int n){
    int j,k;
    for(int i=0; i<n; i++){
        for(j=n; j>i; j--){
            cout<<"*";
        }
        for(k=0; k<2*i+2; k++){
            cout<<" ";
        }
        for(j=n; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void lower(int n){
    int j,k;
    for(int i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<"*";
        }
        for(k=0; k<2*(n-i-1); k++){
            cout<<" ";
        }
        for(j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }    
}
void pattern19(int n){
    /*
        **********
        ****  ****
        ***    ***
        **      **
        *        *
        *        *
        **      **
        ***    ***
        ****  ****
        **********
    */
   upper(n);
   lower(n);
}

void pattern20(int n){
    /*
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        ****  ****
        ***    ***
        **      **
        *        *
    */
   lower(n);
   upper20(n-1);
}

void pattern21(int n){
    /*
        * * * *
        *     *
        *     *
        * * * *
    */
   int j,k;
   for(int i=0; i<n; i++){
    for(j=0;j<n;j++){
        if(i==0 || i==n-1 || j==0 || j==n-1) cout<<"* ";
        else cout<<"  ";
    }
    cout<<endl;
   }
}

void pattern22(int n){
    /*
        4 4 4 4 4 4 4 
        4 3 3 3 3 3 4
        4 3 2 2 2 3 4
        4 3 2 1 2 3 4
        4 3 2 2 2 3 4
        4 3 3 3 3 3 4
        4 4 4 4 4 4 4
    */
    int j,k;
    for(int i=0; i<2*n-1; i++){
        for(j=0;j<2*n-1;j++){
            cout<<(n-min(min(i,j), min(2*n-2-i, 2*n-2-j)))<<" ";
        }
    cout<<endl;
   }
}

int main(){
    int n=4;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    return 0;
}