
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

int main(){
    int n=5;
    pattern9(n);
    return 0;
}