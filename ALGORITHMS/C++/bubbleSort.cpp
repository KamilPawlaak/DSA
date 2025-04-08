#include <iostream>
using namespace std;

void BubbleSort(int* tab, int size){

    for(int i =0; i<size-1;i++){
        for(int j =0; j<size-i-1;j++){
            if(tab[j]>tab[j+1]){
                int temp = tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }

        }
    }

}



int main(){

    int tab[]={3,12,2,45,1333,54,23};
    int size = sizeof(tab)/sizeof(tab[0]);

    
    cout<<"Before: "<<endl;
    for(int i : tab){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"After: "<<endl;
    BubbleSort(tab,size);
    for(int i : tab){
        cout<<i<<" ";
    }




}