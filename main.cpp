//
// Created by Jimmy on 4/17/2019.
//

#include "deque.h"
#include <stdio.h>
void printArr(Deque<int>& dq){
    for (int n=0; n<dq.Size(); n++){
        printf("%d ", dq[n]);
    }
    printf("\n");
}
int main(){
    Deque<int> dq;
    dq.PushBack(5);
    dq.PushFront(4);
    dq.PushBack(6);
    dq.PushFront(3);
    dq.PushFront(2);
    dq.PushBack(7);
    printArr(dq);
}
