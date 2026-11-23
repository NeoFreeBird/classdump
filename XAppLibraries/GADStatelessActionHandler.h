//
#ifndef GADStatelessActionHandler_h
#define GADStatelessActionHandler_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject, NSOperationQueue;

@interface GADStatelessActionHandler : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    NSOperationQueue *_observationQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)handlePingURLAction:(id)urlaction;
- (void)handleLogMessageAction:(id)action;

@end

#endif /* GADStatelessActionHandler_h */
