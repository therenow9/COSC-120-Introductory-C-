#include <iostream>

using namespace std;
int main()
{
    int arr[100];

    for (int i=1; i<100; i++)
    {
        arr[i]=0;
//populate at 0
    }

int age=0;
    while (age!=-99)
{
    cout<<"Please input an age from 1 to 100, put -99 stop"<<endl;
    cin>>age;
    arr[age]+=1;

    }
    for (int i=1; i<100; i++)
    {
//populate at 0

        if (arr[i]!=0)
    {
        cout<<"The number of people "<<i<<" years old "<<" is "<<arr[i]<<endl;
            //print out amount of people
        }
    }
}
