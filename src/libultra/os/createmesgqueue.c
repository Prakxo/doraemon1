#include "ultra64.h"
#include "PRInternal/osint.h"

void osCreateMesgQueue(OSMesgQueue* mq, OSMesg* msg, s32 msgCount) {
    mq->mtqueue = (OSThread*)&__osThreadTail.next;
    mq->fullqueue = (OSThread*)&__osThreadTail.next;
    mq->validCount = 0;
    mq->first = 0;
    mq->msgCount = msgCount;
    mq->msg = msg;
}
 