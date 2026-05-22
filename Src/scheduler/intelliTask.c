#include "intelliTask.h"
#include "intelliTasks/intelliTasks_proto.h"


/*
    task_table - info. about all modes on satellite
    (mode, timerDur, numInterrupts, & corresponding functions)
*/
/*  LowPower     0		Does the satellite need to enter low power?
	Detumble     1		Does the satellite need to detumble?
	Comms        2		Is there a downlink request?
	ECC          3		Is it time to perform ECC?
	Experiment	 4		Is an experiment ready to run?
	IDLE		 5		Idle when no other mode is running
*/

void do_super_cool_stuff(uint8_t task_id, uint32_t bits) {
    for(int i=0; i<TASK_TABLE_LEN; i++) {
        print("Yezzir");
    }

    int c = 13;
    int task_limit = 12;

    if (task_id > task_limit){
        bits = bits * c;
    }
}