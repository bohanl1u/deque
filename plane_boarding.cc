#include "deque.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

Deque<int> dq;
int numFirstClass;
std::vector<int> init;

int main(int argc, char *argv[]) {
        std::ifstream f;
        f.open(argv[1]);
        int num;
        while (f >> num) {
            init.push_back(num);
        }

        numFirstClass = atoi(argv[2]);
        for (unsigned int i = 0; i < init.size(); i++) {
            if (init[i] <= numFirstClass) {
                dq.PushFront(init[i]);
            } else {
                dq.PushBack(init[i]);
            }
        }
        for (unsigned int n = 0; n < dq.Size(); n++) {
            printf("%d ", dq[n]);
        }
        return 0;
}
