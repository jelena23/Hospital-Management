//
//  Graf.hpp
//  CS103-PZ03-JelenaZivkovic2731
//
//  Created by Jelena on 1/15/17.
//  Copyright © 2017 Jelena. All rights reserved.
//

#ifndef Graf_hpp
#define Graf_hpp

#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include <queue>
#define MAX 9999

#endif /* Graf_hpp */

typedef std::pair<int, int> par;

class Graf
{
    int v;
    std::list< std::pair<int, int> > *adj;
    
public:
    Graf(int v);
    
    void dodajGranu(int src, int dest, int w);
    void dijkstra(int s);
};


