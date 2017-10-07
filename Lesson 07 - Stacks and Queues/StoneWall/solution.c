#include <alloca.h>

int solution(int H[], int N) {
    
    int *stack = (int*)alloca(sizeof(int) * N);
    int sp = 0;

    int cnt = 0;
    
    
    int i;
    for (i = 0; i < N; i++){
        
        //if there is no stone on the left, we need a new stone.
        if (sp == 0){
            cnt++;
            stack[sp++] = H[i];
            //check the next height.
            continue;
        }
        
        //there is at least one stone on the left
        
        //the same hight, we don't need a new stone.
        if (stack[sp - 1] == H[i]){
            //check the next height.
            continue;
        }
        
        //the hight goes up, we need a new stone
        if (stack[sp -1] < H[i]){
            cnt++;
            stack[sp++] = H[i];
            //check the next height.
            continue;
        }
        
        //the hight goes down, try rewinding the stack
        while(1){
                    
            //the stone on the left is still heigher.
            //try rewind the stack.
            if (stack[sp - 1] > H[i]){
                sp--;
                
                //reached the bottom of the stack.
                if (sp == 0){
                    //we need a new stone.
                    cnt++;
                    stack[sp++] = H[i];
                    break;        
                }
                continue;
            }
            
            //there is a stone with the same height on the left.
            //this can continue grow to the right.
            if (stack[sp - 1] == H[i]){
                break;
            }
            
            //the stone on the left is lower than the new height.
            //there is need for a new stone.
            stack[sp++] = H[i];
            cnt++;
            break;
        }
        
    }
    
    return cnt;
}
