#include<iostream>
using namespace std;

int main()
{
    int array[15];
    int no_el;
    cout<<"Enter the no of element :";
    cin>>no_el;
    for(int i=0;i<no_el;i++)
    {
        cout<<"Enter the element : ";
        cin>>array[i];
    }
    while(1)
    {
        cout<<endl<<"1. Append";
        cout<<endl<<"2. Insert";
        cout<<endl<<"3. delete by value";
        cout<<endl<<"4. edit";
        cout<<endl<<"5. display";
        cout<<endl<<"6. search";
        cout<<endl<<"7. exit";
        cout<<endl<<"Enter your choice : ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the new element : ";
                int new_el;
                cin>>new_el;
                array[no_el]=new_el;
                no_el++;
            break;
            case 2:
                cout<<"Enter the position at which you want to insert : ";
                int pos;
                cin>>pos;
                cout<<"Enter the new element : ";
                cin>>new_el;
                pos--;
                for(int i=no_el-1;i>=pos;i--)
                    array[i+1]=array[i];
                array[pos]=new_el;
                no_el++;
            break;
            case 3:
                cout<<"Enter the value to be search : ";
                int key;
                cin>>key;
                for(pos=0;pos<no_el;pos++)
                {
                    if(array[pos]==key)
                        break;
                }
                if(pos==no_el)
                {
                    cout<<"Search key not found";
                    break;
                }
                for(int i=pos;i<no_el;i++)
                    array[i]=array[i+1];
                no_el--;
            break;
            case 4:
                cout<<"Enter the position to be edit : ";
                cin>>pos;
                cout<<"Enter the new value for old position : ";
                cin>>array[pos-1];
            break;
            case 5:
                cout<<endl;
                for(int i=0;i<no_el;i++)
                    cout<<endl<<"The element is : "<<array[i];
            break;
            case 6:
                cout<<"Enter the value to be search : ";
                cin>>key;
                for(pos=0;pos<no_el;pos++)
                {
                    if(array[pos]==key)
                        break;
                }
                if(pos==no_el)
                {
                    cout<<"Search key not found";
                    break;
                }
                cout<<"Search key found at : "<<pos+1;
            break;
            case 7:
                return(0);
            break;
		}
    }
}
