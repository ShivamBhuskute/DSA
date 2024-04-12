#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

string toBinaryCalculator(double num)
{
    // Check if the number is Between 0 to 1 or Not
    if (num >= 1 || num <= 0)
        return "ERROR";

    string ans;
    double x = 0.5;
    ans.append("0.");
    while (num > 0)
    {
        // condition on length as maximum 32 characters are allowed
        if (ans.length() >= 32)
            return "ERROR";
        // compare the number to x
        if (num >= x)
        {
            ans.append("1");
            num = num - x;
        }
        else
        {
            ans.append("0");
        }

        x /= 2;
    }
    return ans;
}

int main(){
    float num = 0.625;
    cout << toBinaryCalculator(num);
}