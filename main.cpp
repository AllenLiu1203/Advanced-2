//
//  main.cpp
//  A2
//
//  Created by 劉世翔 on 2019/4/25.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <string.h>
#include<iostream>
using namespace std;
int main()
{
    int i,ilength;
    char str1[20];
    cout << "輸入一個字串: ";
    cin >> str1;
    ilength = strlen(str1);
    cout << "該子串的反向:";
    for(i = ilength;i>=1;i--){
        cout << str1[i];
    }
    cout << str1[0] << endl;
}
