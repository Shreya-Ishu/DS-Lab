#include <iostream>
using namespace std;

class Inssort{
    int arr[100],n;
    public:
    void getdata();
    void showdata();
    void sort();
};

void Inssort :: getdata(){
    cout<<"No. of elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void Inssort :: showdata(){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"   ";
}

void Inssort :: sort(){
    int temp,min,j;
    for(int i=1;i<n;i++){
        temp = arr[i];
        for(j=i;j>0 && arr[j-1]>temp;j--){
            arr[j] = arr[j-1];
        }
        arr[j] = temp;
    }
}
int main(){
    Inssort obj;
    obj.getdata();
    obj.sort();
    obj.showdata();
}
