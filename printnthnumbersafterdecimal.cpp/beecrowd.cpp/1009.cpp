#include<iostream>
#include<iomanip>
        using namespace std;
        int main()
       {
        char M[100];
        cin>>M;
        double a,b,c;
        cin>>a>>b;
        c=a+(b*15)/100;
        cout<<fixed<<setprecision(2);
        cout<<"TOTAL = R$ "<<c<<endl;
        return 0;
    }          