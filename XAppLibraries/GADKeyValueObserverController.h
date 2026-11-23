//
#ifndef GADKeyValueObserverController_h
#define GADKeyValueObserverController_h
@import Foundation;

#include "GADKeyValueObserver.h"

@class NSObject;

@interface GADKeyValueObserverController : NSObject {
    /* instance variables */
    GADKeyValueObserver *_observer;
}

/* instance methods */
- (id)initWithObject:(id)object key:(id)key block:(id /* block */)block;
- (void)dealloc;

@end

#endif /* GADKeyValueObserverController_h */
