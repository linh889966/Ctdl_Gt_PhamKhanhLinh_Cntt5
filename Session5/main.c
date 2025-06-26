#include <stdio.h>

int recursion (int n) {
    // điều kiện dừng
    if (n == 0){
        return 0;
    }
    //gọi lại chính nó
    return n+ recursion (n-1);
}