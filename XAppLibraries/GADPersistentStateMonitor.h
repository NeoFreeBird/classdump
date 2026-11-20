//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
