//
#ifndef GADBackgroundTaskPinger_h
#define GADBackgroundTaskPinger_h
@import Foundation;

#include "GADEventContext.h"

@class NSObject, NSURL;

@interface GADBackgroundTaskPinger : NSObject {
    /* instance variables */
    GADEventContext *_context;
    unsigned long long _backgroundTaskIdentifier;
    NSURL *_URL;
}

/* instance methods */
- (id)initWithURL:(id)url eventContext:(id)context;
- (void)ping;
- (void)endBackgroundTask;

@end

#endif /* GADBackgroundTaskPinger_h */
