//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XFoundation11TimerWorker_h
#define _TtC11XFoundation11TimerWorker_h
@import Foundation;

#include "_TtC11XFoundation13CombineWorker.h"

@class XFoundation.TimerStream;

@interface XFoundation.TimerWorker : XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    XFoundation.TimerStream timerStream;
}

@end

#endif /* _TtC11XFoundation11TimerWorker_h */
