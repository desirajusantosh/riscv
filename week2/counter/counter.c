//#include<stdio.h>

void display(int value) {
    //printf("Counter is at: %d \n",value);
}

int main() {
    int cnt = 0x0000;
    int max = 0x0010;

    while (1) {
        if (cnt == max) {
            break;
        }
        cnt += 1;
        display(cnt);
    }
    
    return 1;
}
