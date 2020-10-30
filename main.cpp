#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
#include <list>

using namespace std;

int sockMerchant(int, std::vector<int>);

int main()
{
    int n;
    int temp;
    std::vector<int> ar;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        ar.push_back(temp);
    }
    temp = 0;
    temp = sockMerchant(n,ar);

}

int sockMerchant(int n, std:: vector<int> ar) {

    std::list<int> mylist(ar.begin(), ar.end());
    mylist.sort();           
    mylist.unique();           

    int count = 0;
    int pairCount = 0;

    for (std::list<int>::iterator it= mylist.begin();it!=mylist.end();it++)
    {
        for (int j = 0; j < ar.size(); j++)
        {
            if (*it == ar[j])
                count++;
        }
        pairCount = pairCount + count / 2;
        count = 0;
    }
    std::cout << pairCount;
    return pairCount;
}

