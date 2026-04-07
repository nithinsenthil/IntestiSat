#include "platform_init.h"

#define RUN_TEST	1
#define TEST_ID 	0

#include <TestDefinition.h>

int main() {
    init_init();
    init_platform(!RUN_TEST);

#if (RUN_TEST==1) && (TEST_ID != 0)

    void (*testFunc)();
    testFunc = getTestFunction(TEST_ID);
    testFunc();

    #else
	#Test comment

	while (1) {
		continue;
	}

#endif

}
