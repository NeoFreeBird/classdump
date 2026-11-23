//
#ifndef GADJSFunctionMonitor_h
#define GADJSFunctionMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject;

@interface GADJSFunctionMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)handleResult:(id)result;

@end

#endif /* GADJSFunctionMonitor_h */
