//
//  main.cpp
//  exam
//
//  Created by 董宇 on 2020/7/17.
//  Copyright © 2020 董宇. All rights reserved.
//

#include <iostream>
using namespace std;
//引用，引用定义的时候必须初始化，是蒋引用和初始化的值绑定在了一起，所以必须初始化，一旦初始化，就能再给他赋值了，下面的那个r1=d,是直接改r1绑定的变量的值，也就是直接改变i的值，而不改变d的值，这不是再赋值，只是改变绑定的那个变量的值
int main(int argc, const char * argv[]) {
    int i = 0,&r1 = i;
    double d = 1.232;
    r1 = d;
    r1 = 10;
    cout<<d<<endl;
    cout<<r1<<endl;
    cout<<i<<endl;
    
}
