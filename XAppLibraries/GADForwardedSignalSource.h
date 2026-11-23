//
#ifndef GADForwardedSignalSource_h
#define GADForwardedSignalSource_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADSignalSource-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface GADForwardedSignalSource : NSObject <GADSignalSource> {
    /* instance variables */
    NSDictionary *_forwardedSignals;
    GADObserverCollection *_observers;
    _Bool _signalsNeedUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)getSignalUpdateQueue:(id *)queue signalCreationBlock:(id /* block */ *)block;

@end

#endif /* GADForwardedSignalSource_h */
