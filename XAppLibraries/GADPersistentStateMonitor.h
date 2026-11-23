//
#ifndef GADPersistentStateMonitor_h
#define GADPersistentStateMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSMutableDictionary, NSObject;

@interface GADPersistentStateMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    NSMutableDictionary *_state;
}

/* instance methods */
- (id)initWithMessageSource:(id)source;
- (id)savedState;
- (void)saveState:(id)state;
- (void)updateSettings:(id)settings;
- (void)setUserPreferences:(id)preferences;

@end

#endif /* GADPersistentStateMonitor_h */
