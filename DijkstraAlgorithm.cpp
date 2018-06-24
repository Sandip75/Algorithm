#include<bits/stdc++.h>
using namespace std;


class Pair{
public:
    int dest;
    int weight;
    Pair(int v,int wt){
        dest = v;
        weight = wt;
    }
};

class myCompare{
public:
    bool operator()(Pair p1,Pair p2){
            return p1.weight < p2.weight;
    }
};


class Graph{
    int V;
    vector<Pair> *adjList;

public:
    Graph(int v){
        V=v;
        adjList = new vector<Pair>[V];
    }
    void addEdge(int u,int v,int wt){
        Pair p(v,wt);
        adjList[u].push_back(p);
    }


    void dijikstra(int src)
    {
        int *D = new int[V+1];
        for(int i=1;i<=V;i++)
            D[i]=INT_MAX;
        D[src]=0;

        priority_queue<Pair,vector<Pair>,myCompare> Q;

        Pair S(src,D[src]);
        Q.push(S);

        while(!Q.empty())
        {
            Pair temp = Q.top();
            Q.pop();
            int u = temp.dest;
            int wt = temp.weight;

            if(D[u]<wt) continue;

            for(int i=0;i<adjList[u].size();i++)
            {
                Pair p = adjList[u][i];
                int v = p.dest;
                int W = p.weight;
                if(D[u]+W<D[v])
                {
                    D[v] = D[u]+W;
                    Pair t(v,D[v]);
                    Q.push(t);
                }
            }
        }

        for(int i=1;i<V;i++)
            cout<<src<<" - "<<i<<" = "<<D[i]<<"\n";
    }
};


int main()
{
    Graph G(6);

    G.addEdge(1,2,1);
    G.addEdge(1,3,3);
    G.addEdge(2,3,1);
    G.addEdge(3,5,3);
    G.addEdge(2,4,1);
    G.dijikstra(1);



    return 0;
}
