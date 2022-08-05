#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
#define PI 3.14159265
using namespace std;

//vector<int> split(const string& s, char delim) {
//    vector<int> result;
//    stringstream ss(s);
//    string item;
//
//    while (getline(ss, item, delim)) {
//        result.push_back(atoi(item.c_str()));
//    }
//
//    return result;
//}
int main()
{
    int n;
    //string ampl;
    cout << "Vvedite N: " << endl;
    cin >> n;
    cout << "Vvedite Vi: " << endl;
    //cin >> ampl;
    //
    //vector<int> v = split(ampl,' ');
    std::vector<double> val;
    double temp1;
    for (int i = 0; i < n; ++i )
    {
        std::cin >> temp1;
        val.push_back(temp1);
    }
   /* for (auto k : val)
    {
        cout << k << " ";
    }*/
    for (int i = 0; i < n; ++i)
    {
        double param;
        param = (val[i] / 100);
        double arc = asin(param);
        double x = ((arc / val[i]) * 360);
        cout << x << " ";
    }
    
    return 0;
}