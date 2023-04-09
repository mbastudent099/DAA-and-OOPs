#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

double fractionalKnapsack(int W, Item arr[], int n)
{
    double res = 0;
    vector<pair<double, int>> valuePerWt;
    for (int i = 0; i < n; i++)
    {
        double x = arr[i].value, y = arr[i].weight;
        valuePerWt.push_back({x / y, arr[i].weight});
    }
    sort(valuePerWt.rbegin(), valuePerWt.rend());
    for (int i = 0; i < n && W; i++)
    {
        double x = valuePerWt[i].first, y = valuePerWt[i].second, z = min(y, (double)W);
        res += x * z;
        W -= z;
    }
    return res;
}

/*
syllabus-
5 sortings with time
prims, krushkal, bfs, dfs, dijkstra, floyd, binary, fractional, 
exp no: 4, 5, 6, 7, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19
*/