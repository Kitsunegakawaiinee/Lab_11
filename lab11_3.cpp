#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;


double Aver(double num)
{
    ifstream so("score.txt");
    string A;
    double sum = 0;

    for (int i=0; i< num ; i++)
    {
        getline(so,A);
        sum += atof(A.c_str());
    }

    so.close();

    return sum;
}

double SD(double Aver,double count)
{
    ifstream so("score.txt");
    string A;
    double sum =0, sq =0;


    for (int i=0; i< count ; i++)
    {
        getline(so,A);
        sum += pow(atof(A.c_str()),2);
        sq = sqrt((sum/count)-pow(Aver,2));
    } 
    so.close();
    return sq;
}

int main()
{
    double countline = 0;
    ifstream dataread("score.txt");
    string A;
    while(getline(dataread,A))
    {
        countline ++;
    }
    dataread.close();

    cout << "Number of data = " << countline;
    double mean = Aver(countline)/countline;

    cout << setprecision(3) << endl << "Mean = " << mean << endl;
    cout << "Standard deviation = " << SD(mean,countline);
}