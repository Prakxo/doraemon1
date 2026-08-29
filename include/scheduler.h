#ifndef C_1400_H
#define C_1400_H

#include "ultra64.h"
#include "schedule.h"

extern InternalScheduler sc;
extern OSMesgQueue* sched_cmdQ;

void createScheduler(InternalScheduler* sched, void* stack, OSPri priority, u8 mode, u8 numFields);
void osScAddClient(InternalScheduler* sched, OSScClient* c, OSMesgQueue* msgQ);
void osScRemoveClient(InternalScheduler* sched, OSScClient* c);
OSMesgQueue* osScGetCmdQ(InternalScheduler* sched);
void __scMain(void* arg);
void __scHandleRetrace(InternalScheduler* sched);
void __scHandleRSP(InternalScheduler* sched);
void __scHandleRDP(InternalScheduler* sched);
OSScTask* __scTaskReady(OSScTask* t);
s32 __scTaskComplete(InternalScheduler *sched, OSScTask *t);
void __scAppendList(InternalScheduler* sched, OSScTask* t);
void __scExec(InternalScheduler* sched, OSScTask* sp, OSScTask* dp);
void __scYield(InternalScheduler* sched);
s32 __scSchedule(InternalScheduler* sched, OSScTask** sp, OSScTask** dp, s32 availRCP);

#endif
