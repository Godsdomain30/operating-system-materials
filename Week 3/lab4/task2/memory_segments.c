#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Data Segment: Initialized global variable
int global_var = 150; 

// BSS Segment: Uninitialized global variable
int bss_var; 

int main() {
    // Stack Segment: Local variable
    int local_var = 30; 
    
    // Heap Segment: Dynamically allocated memory
    int *heap_var = (int*)malloc(sizeof(int)); 
    if (heap_var == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    *heap_var = 500;

    printf("....... Variable Addresses .......\n\n");
    printf("global_var (Data):      %p\n", (void*)&global_var);
    printf("bss_var (BSS):          %p\n", (void*)&bss_var);
    printf("heap_var (Heap Data):   %p\n", (void*)heap_var);
    printf("heap_var (Stack Ptr):   %p\n", (void*)&heap_var);
    printf("local_var (Stack):      %p\n", (void*)&local_var);

    // Address Difference calculation
    uintptr_t stack_addr = (uintptr_t)&local_var;
    uintptr_t heap_addr = (uintptr_t)heap_var;
    
    printf("\nAddress Difference (Stack - Heap): %lu bytes\n", 
           (unsigned long)(stack_addr > heap_addr ? stack_addr - heap_addr : heap_addr - stack_addr));

    free(heap_var);
    return 0;
}
