#include<bits/stdc++.h>
using namespace std;



void producer(int &mutex,int &full,int &empty,int &x){
    mutex--;

    full++;

    empty--;
    
    x++;
    cout<<"Item produced by producer =\t"<<x<<endl;
    mutex++;

}
void consumer(int &mutex,int &full,int &empty,int &x){
    mutex--;
    full--;
    empty++;
    cout<<"Consumer consumes item =\t"<<x<<endl;
    mutex++;
    x--;

}
int main(int argc, char const *argv[])
{
    int mutex=1;
    int full=0;
    
    int empty=20;
    int x=0;    
    int p=0;
    int n;
    int i=1;
    while(i++){
        cout<<"\nPress 1 for Producer\nPress 2 for Consumer\nPress 3 for exit"<<endl;
        cin>>n;
        switch(n)
        {
        case 1:
            if((mutex==1) &&empty!=0){
                producer(mutex,full,empty,x);}
            else{
                cout<<"Buffer is full"<<endl;
            }
            break;
        case 2:
            if ((mutex == 1)
                && (full != 0)) {
                consumer(mutex,full,empty,x);
            }
            else{
                cout<<"Buffer is empty"<<endl;
            }
            break;
        case 3:
            p=1;
            break;
        }
        if(p==1){
            break;
        }
    }
    return 0;
}