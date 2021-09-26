#include <iostream>
#include <iomanip>
using namespace std;
float get_avg(float *sales_arr,int arr_size);
float get_total(float *sales_arr,int arr_size);
float get_avg(float *sales_arr,int arr_size)
{
    //function to calculate average with dynamic array
    float total=0;
    float avg=0;
    for (int i=0; i<arr_size; i++)
    {
        total+=sales_arr[i];
    }
    avg=total/arr_size;
    //calculate and return
    return avg;
}
float get_total(float *sales_arr,int arr_size)
{
    //function to calculate average with dynamic array
    float total=0;
    for (int i=0; i<arr_size; i++)
    {
        total+=sales_arr[i];
    }
    //calculate and return
    return total;
}
int main()
{
    int months=0;
    float *Ptr=nullptr;
    float total=0;
    float avg=0;
    //initialize

    cout<<"Please input the number of monthly sales to be input "<<endl;
    cin>>months;
    Ptr=new float[months];
    //allocate
    for (int i=0; i<months; i++)
    {
        //populate array
        cout<<"Please input the sales for month "<<i+1<<endl;
        cin>>Ptr[i];

    }
    avg=get_avg(Ptr,months);
    total=get_total(Ptr,months);
    //get avg and total
    cout<<"The total sales for this year is $"<<fixed<<setprecision(2)<<total<<endl;
    cout<<"The average monthly sale is $"<<fixed<<setprecision(2)<<avg<<endl;

    delete [] Ptr;
    //deallocate memory

    return 0;
}
