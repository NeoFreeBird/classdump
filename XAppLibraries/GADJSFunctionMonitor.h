//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
