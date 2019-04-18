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
    dq.PushFront(20);
    printf("After pushfront(20)");
    printArr(dq);
    dq.PushBack(23);
    printf("After pushback(23)");
    printArr(dq);
    dq.PushFront(10);
    printf("After pushfront(10)");
    printArr(dq);
    dq.PushFront(30);
    printf("After pushfront(30)");
    printArr(dq);
    dq.PushFront(50);
    printf("After pushfront(50)");
    printArr(dq);
    dq.PushFront(50);
    printf("After pushfront(50)");
    printArr(dq);
    dq.PushFront(50);
    printf("After pushfront(50)");
    printArr(dq);
    dq.PopFront();
    printf("After popFront ");
    printArr(dq);
    dq.PopBack();
    printf("After popBack ");
    printArr(dq);
    dq.PopFront();
    printf("After popFront ");
    printArr(dq);
}
