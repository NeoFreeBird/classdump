//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
