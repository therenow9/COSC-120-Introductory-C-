#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_AMT=50;
typedef float temp[MAX_AMT];
float get_average(temp temperature,int num);
float get_highest(temp temperature,int num);
float get_lowest(temp temperature,int num)
{
    float lowest=1000;
    for (int i=0; i<num; i++)
    {
        if (temperature[i]<lowest)
        {
            lowest=temperature[i];
            //get lowest
        }
    }
    return lowest;
}
float get_highest(temp temperature,int num)
{
    float highest=0;
    for (int i=0; i<num; i++)
    {
        if (temperature[i]>highest)
        {
            highest=temperature[i];
            //get highest
        }
    }
    return highest;
}
float get_average(temp temperature,int num)
{
    float avg=0;
    for (int i=0; i<num; i++)
    {
        avg+=temperature[i];
    }
    avg=avg/num;
    return avg;
}
int main()
{
    int num=51;
    float avg=0;
    float highest=0;
    float lowest=0;
    while (num>50)
    {

        cout<<"Please input the number of temperatures to be read"<<endl;
        cin>>num;
    }
    temp temperature;
    for (int i=0; i<num; i++)
    {
        cout<<"Input temperature "<<i+1<<":"<<endl;
        cin>>temperature[i];
        //assign
    }
    avg=get_average(temperature,num);
    //get average
    highest=get_highest(temperature,num);
    //get highest
    lowest=get_lowest(temperature,num);
    //get lowest
    cout<<"The average temperature is "<<fixed<<setprecision(2)<<avg<<endl;;
    cout<<"The highest temperature is "<<fixed<<setprecision(2)<<highest<<endl;
    cout<<"The lowest temperature is "<<fixed<<setprecision(2)<<lowest<<endl;
    //print

    return 0;
}


