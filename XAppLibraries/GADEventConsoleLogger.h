//
#ifndef GADEventConsoleLogger_h
#define GADEventConsoleLogger_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject, NSOperationQueue;

@interface GADEventConsoleLogger : NSObject {
    /* instance variables */
    NSOperationQueue *_operationQueue;
    GADObserverCollection *_settingsUpdateObservers;
    GADObserverCollection *_loggingObservers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)updateEnabled;
- (void)logEvent:(id)event;

@end

#endif /* GADEventConsoleLogger_h */
