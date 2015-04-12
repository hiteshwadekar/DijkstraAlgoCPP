#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct AdjListNode
{
    int dst;
    int wt;
    struct AdjListNode *next;
};


class Graph
{
public:
    Graph();
    Graph(int v);
    ~Graph();
    void CreateGraph();

private:
   vector<struct AdjListNode *> m_list;
};


int main()
{
    cout << "*--- Welcome to Sir Dijktra's world ----*" << endl;
    return 0;
}
