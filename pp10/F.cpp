
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int n;
    cin >> n;

    // vector<vector<int> > v;
    // for (int i = 0; i < n; i++)
    // {
        
    //     vector<int> tmp;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         tmp.push_back(x);
    //     }
    //     v.push_back(tmp);
    // }
    double sum=0;
    int vremsum=0;
    int sumofcredits=0;
    for (int i = 0; i < n; i++)
    {
        int att1, att2 , final , cred;
        cin >> att1 >> att2 >> final >> cred;
            if(att1+att2<30 || final<20){
                sum+=0;
                sumofcredits+=cred;
            }
            else{
            vremsum=att1+att2+final;
            sumofcredits+=cred;
            // cout << vremsum  << "AAafdgfsdfd" << endl;
        }
        
        // cout << vremsum << "AA" << endl;
        // sumofcredits+=v[i][3];
        if(vremsum<=100 && vremsum>=95){
            int k=4 * cred;
            sum+=k;
        }
        else if(vremsum<=94 && vremsum>=90){
            double k=(3.6666667 * cred);
            sum+=k;
        }
        else if(vremsum<=89 && vremsum>=85){
            double k=(3.333333 * cred);
            sum+=k;
        }
        else if(vremsum<=84 && vremsum>=80){
            int k=3 * cred;
            sum+=k;
        }
        else if(vremsum<=79 && vremsum>=75){
            double k=2.6666667*cred;
            sum+=k;
            // cout << 2.67*4 << " Y" << endl;
        }
        else if(vremsum<=74 && vremsum>=70){
            double k=2.333333 * cred;
            sum+=k;
        }
        else if(vremsum<=69 && vremsum>=65){
            double k=2 * cred;
            sum+=k;
        }
        else if(vremsum<=64 && vremsum>=60){
            double k=1.6666667*cred;
            sum+=k;
        }
        else if(vremsum<=59 && vremsum>=55){
            double k=(1.333333 * cred);
            sum+=k;
        }
        else if(vremsum<=54 && vremsum>=50){
            double k=1 * cred;
            sum+=k;
        }
        // cout << sum << " AAAAAAA" << endl;
        // cout << sumofcredits << " PIZDA" << endl;

        vremsum=0;
    }
            cout << sum/sumofcredits;

}