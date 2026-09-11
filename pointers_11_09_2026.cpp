#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    int x=25;
    int* p=&x;
    cout<<"value of x"<<*(&x)<<endl;
    cout<<"Address of x:"<<(*p)<<endl;
    cout<<"Value stroed in p:"<<*(&x)<<endl;
    cout<<"Value pointed by p:"<<(&x)<<endl;

    
}
    */

    /*Q2    int main(){
int x = 10;
int *p = &x;
*p=50;
cout<<"value of x:"<<(*p)<<endl;

    }
*/
//Q3
/*
int main(){
int a = 10;
int b = 20;
int *p = &a;
int *q = &b;
 cout<<"value of a:"<<(*q)<<endl;
 cout<<"Value of the b:"<<(*p)<<endl;
}
*/
int main(){
int a = 10;
int b = 20;
int *p = &a;
int *q = &b;

int temp = *p;
    *p = *q;
    *q = temp;


cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;


}
