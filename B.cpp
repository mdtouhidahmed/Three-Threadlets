#include<iostream>
using namespace std;
string equalLength(int a, int b, int c){
    // getting minimum
    int minimum = (a<=b && a<=c)?a:(b<=c)?b:c;
    // reducing value
    for(int i=1; i<=3; i++){
        if(a>=b && a>=c){
            a = a - minimum;
        }
        else if(b>=a && b>=c){
            b = b - minimum;
        }
        else{
            c = c - minimum;
        }

        if(a==b && b==c){
            return "YES";
        }
    }
    return "NO";
}
int main(){

    int t, a, b, c;
    cin>>t;
    string output[t];

    for(int i=0; i<t; i++){
        cin>>a>>b>>c;
        output[i] = equalLength(a,b,c);
    }

    for(int i = 0; i<t; i++){
        cout<<output[i]<<endl;
    }

    return 0;
}


















