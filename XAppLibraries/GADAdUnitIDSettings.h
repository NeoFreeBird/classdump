//
#ifndef GADAdUnitIDSettings_h
#define GADAdUnitIDSettings_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADAdUnitIDSettings : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    NSDictionary *_adUnitPatterns;
    NSDictionary *_adUnitIDSettings;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)updateValues;
- (id)nearestAncestorOfAdUnitID:(id)id adType:(id)type;
- (void)updateAdUnitSettings;
- (id)settingsForAdUnitID:(id)id adType:(id)type;
- (void)updateAdUnitPatterns;

@end

#endif /* GADAdUnitIDSettings_h */
