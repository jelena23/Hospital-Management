//
//  main.cpp
//  CS103-PZ03-JelenaZivkovic2731
//
//  Created by Jelena on 1/14/17.
//  Copyright © 2017 Jelena. All rights reserved.
//

#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include "Graf.hpp"


int main()
{
    int v = 6, src;
    
    std::cout << "Unesite pocetni cvor: " << std::endl;
    std::cin >> src;
    Graf g(v);
    
    g.dodajGranu(0, 1, 4);
    g.dodajGranu(0, 3, 8);
    g.dodajGranu(1, 2, 8);
    g.dodajGranu(1, 5, 11);
    g.dodajGranu(2, 3, 7);
    g.dodajGranu(2, 1, 2);
    g.dodajGranu(2, 5, 4);
    g.dodajGranu(3, 4, 9);
    g.dodajGranu(3, 5, 14);
    g.dodajGranu(4, 5, 10);
    
    g.dijkstra(src);
    
    return 0;
}
