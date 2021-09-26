#include <iostream>
using namespace std;
void sort(float* score, int num_scores)
{
    //bubble sort to sort in ascending order
    for (int i = 0; i < num_scores-1; i++)
    {
        for (int j = 0; j < num_scores-i-1; j++)
        {
            if (score[j] < score[j+1])
            {
                swap(score[j], score[j+1]);
                //perform swap
            }
        }
    }
    cout<<"Here are the scores in ascending order"<<endl;
    for (int i=0; i<num_scores; i++)
    {
        //print swapped scores
        cout<<score[i]<<endl;
    }
}

int main()
{
    float *score = nullptr;
    int num_scores=0;
    int total=0;
    int avg=0;
    // a pointer variable
    cout<<"Please input the number of scores"<<endl;
    cin>>num_scores;
    score =new float[num_scores];
    for (int i=0; i<num_scores; i++)
    {
        cout<<"Please enter a score"<<endl;
        cin>>score[i];
        total+=score[i];
    }
    avg=total/num_scores;
    cout<<"The average of the scores is "<<avg<<endl<<endl;
    sort(score,num_scores);
    // allocation of the array sort(score,scoreSize); // call to the function
    delete []score;
    //deallocate
    return 0;
}
