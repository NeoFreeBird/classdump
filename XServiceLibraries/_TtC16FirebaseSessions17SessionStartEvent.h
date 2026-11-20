//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16FirebaseSessions17SessionStartEvent_h
#define _TtC16FirebaseSessions17SessionStartEvent_h
@import Foundation;

#include "GDTCOREventDataObject-Protocol.h"

@class NSObject, __C._firebase_appquality_sessions_SessionEvent;

@interface FirebaseSessions.SessionStartEvent : NSObject <GDTCOREventDataObject> { // (Swift)
    /* instance variables */
    __C._firebase_appquality_sessions_SessionEvent proto;
}

/* instance methods */
- (void)dealloc;
- (id)transportBytes;
- (id)init;

@end

#endif /* _TtC16FirebaseSessions17SessionStartEvent_h */
