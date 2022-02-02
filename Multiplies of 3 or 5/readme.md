# 🎀 Project Euler Multiples of 3 or 5 Problemi

## Problem

![](https://raw.githubusercontent.com/ArdaSirvan/algorithm-examples/main/Multiplies%20of%203%20or%205/problem.PNG)

## C++ kodu

```c++

#include <iostream>

using namespace std;

int
main ()
{
  int result=0;
  for (int i = 1;i<1000;i++)
    {
        if(i%3==0 || i%5==0){
            result=i+result;
        }
    }
    cout << result;

}

```

## ✔️ Sonuç

![](https://raw.githubusercontent.com/ArdaSirvan/algorithm-examples/main/Multiplies%20of%203%20or%205/output.png)
