//
//  main.cpp
//  bubble sort
//
//  Created by Vivek Tejwani on 20/03/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    int arr[]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The final array is \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}

