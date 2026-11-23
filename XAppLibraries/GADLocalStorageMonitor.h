//
#ifndef GADLocalStorageMonitor_h
#define GADLocalStorageMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject;

@interface GADLocalStorageMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
}

/* instance methods */
- (id)initWithMessageSource:(id)source;
- (void)writeKeyValuesPairsToLocalStorage:(id)storage;
- (void)clearKeyValuePairsFromLocalStorage:(id)storage;

@end

#endif /* GADLocalStorageMonitor_h */
