
#include <iostream>
using namespace std;

int main()
{
    int* ids=nullptr;
    //define Ptr
    int id_amnt;
    int id_search;
    bool in_array;
    //initialize
    cout<<"Please enter the number of id numbers to be read"<<endl;
    cin>>id_amnt;
    ids =new int [id_amnt];
    for (int i=0; i<id_amnt; i++)
        //populate array
    {
        cout<<"Please enter an id number"<<endl;
        cin>>ids[i];
    }
    cout<<"Please input an id number to be searched"<<endl;
    cin>>id_search;
    for(int i=0; i<<id_amnt; i++)
        //perform id search
    {
        if (ids[i]=id_search)
        {
            in_array=true;
            break;
        }
        else
        {
            in_array=false;
        }
    }
    if (in_array==true)
    {
        cout<<id_search<<" was in the array"<<endl;
    }
    else
    {
        cout<<id_search<<" was not in the array"<<endl;
    }
    delete [] ids;
    //deallocate
    return 0;
}
