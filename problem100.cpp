#include<iostream>
using namespace std;
int bucle(int a){
    int i=0;
    while(1){
        i++;
        if(a==1) break;
        if(a%2!=0) a=(3*a)+1;
        else a=a/2;
    }
    return i;
}
int main(){
    int a,b,c,temp,i;
    while(1){
        cin>>a>>b;
        int max=0;
        cout << a << " " << b << " ";
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++){
            c=bucle(i);
            if(c>=max)
                max=c;
        }
        cout << max << endl;;
    }
    return 0;
}
