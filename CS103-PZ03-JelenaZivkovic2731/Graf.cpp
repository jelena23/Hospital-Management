//
//  Graf.cpp
//  CS103-PZ03-JelenaZivkovic2731
//
//  Created by Jelena on 1/15/17.
//  Copyright © 2017 Jelena. All rights reserved.
//

#include "Graf.hpp"

Graf::Graf(int v)
{
    this->v = v;
    adj = new std::list<par> [v];
}
void Graf::dodajGranu(int src, int dest, int w)
{
    adj[src].push_back(std::make_pair(dest, w));
    adj[dest].push_back(std::make_pair(src, w));
}
void Graf::dijkstra(int src)
{
    std::priority_queue<par, std::vector <par> , std::greater<par>> pq;
    std::vector<int> rastojanje(v, MAX);
    
    pq.push(std::make_pair(0, src));
    rastojanje[src] = 0;
      
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        
        std::list<std::pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;
            
            if(rastojanje[v] > rastojanje[u] + weight)
            {
                rastojanje[v] = rastojanje[u] + weight;
                pq.push(std::make_pair(rastojanje[v], v));
            }
        }
    }
    std::cout << "Cvor        Rastojanje od pocetnog cvora: " << src << std::endl;
    for(int i = 0; i < v; ++i)
    {
        std::cout << i << "\t\t\t" << rastojanje[i] << std::endl;
    }
}
