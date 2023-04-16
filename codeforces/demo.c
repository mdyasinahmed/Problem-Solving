// #include <stdio.h>

// int main(void) {
	
    
// 	return 0;
// }
#include <stdio.h>

// int main() {
//     int num;
//     while (scanf("%d", &num) == 1) {
//         // do something with the integer
//         printf("You entered: %d\n", num);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int nums[100]; // array to hold integers
    int count = 0; // counter for number of integers entered

    // read in integers until non-integer input is entered
    int num;
    while (scanf("%d", &num) == 1) {
        nums[count] = num;
        count++;
    }

    // print out all the integers entered
    printf("You entered the following integers:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}



