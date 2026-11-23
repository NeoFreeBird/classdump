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
