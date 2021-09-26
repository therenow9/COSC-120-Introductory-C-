#include <iostream>

using namespace std;

int number_grades(char grade_arr[],char letter,int num);
int number_grades(char grade_arr[],char letter,int num)
{
    int amnt =0;
    //return letter
    for (int i=0; i<num; i++)
    {
        if (grade_arr[i]==letter)
        {
            amnt++;
            //tally letters
        }

    }
    return amnt;
}

int main()
{
    int num=0;
    int amnt_A=0;
    int amnt_B=0;
    int amnt_C=0;
    int amnt_D=0;
    int amnt_F=0;
    //declare amounts
    cout<<"Please input the number of grades to be read in.(1-50)"<<endl;
    cin>>num;
    char grades[num];
    cout<<"All grades must be upper case A B C D or F"<<endl;
    for (int i=0; i<num; i++)
    {
        cout<<"Input a grade"<<endl;
        cin>>grades[i];

    }
    amnt_A=number_grades(grades,'A',num);
    amnt_B=number_grades(grades,'B',num);
    amnt_C=number_grades(grades,'C',num);
    amnt_D=number_grades(grades,'D',num);
    amnt_F=number_grades(grades,'F',num);
    //get amnts
    cout<<endl<<"Number of A="
        <<amnt_A<<endl;
    cout<<"Number of B="<<amnt_B<<endl;
    cout<<"Number of C="<<amnt_C<<endl;
    cout<<"Number of D="<<amnt_D<<endl;
    cout<<"Number of F="<<amnt_F<<endl;
    //output
    return 0;
}
