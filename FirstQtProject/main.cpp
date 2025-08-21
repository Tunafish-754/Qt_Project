#include "mainwindow.h"
#include<bits/stdc++.h>
using namespace std;

int add(int x,int y){
    return x+y;
}

bool cmp(int a,int b){
    return a>b;
}

int maxNum(int a,int b,bool (*cmp1)(int a,int b)){
    if(cmp1){
        return a;
    }
    else{
        return b;
    }
}

#include <QApplication>

int main(int argc, char *argv[])
{
    int a,b;
    cin >> a >> b;
    int ret = maxNum(a,b,[](int a,int b)->bool{
        return a>b;
    });
    cout << ret << endl;
    return 0;
}
