//
//  Controller.cpp
//  AssignmentsProject
//
//  Created by Singh, Kashish on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

using namespace std;

Controller :: Controller()
{

}

void Controller :: start()
{
    //decleration template  -   std::vector<int> v;
    vector<int> intVector(10);  //declares a vector of type int that has 10 values
    vector<string> stringVector(2);    //declares a string vector
    
    for(int index = 0; index < intVector.size(); index++)
    {
        intVector[index] = index;
        cout << intVector[index] << " ";
    }
    cout << endl;
    
    for(int i = 0; i < stringVector.size(); i++)
    {
        stringVector[i] = "dog";
        cout << stringVector[i] << " ";
    }
    cout << endl;
}
