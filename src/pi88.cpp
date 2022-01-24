#include <stdio.h>
#include "x86.h"

// This main function calls the pi8x_main with the parameters
// to enable either V20 8088 or V30 8086 chips the chips have 
// differnt data bus widths. 
extern int pi8x_main(int cpu, const char* title);

int main(int argc, char* argv[]) {
	return pi8x_main(V20, "x88 v20");
}