//
#ifndef GADContentHashingController_h
#define GADContentHashingController_h
@import Foundation;

#include "GADContentQueue.h"
#include "GADObserverCollection.h"
#include "GADScheduler.h"
#include "GADSignal-Protocol.h"
#include "GADSignalSource-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADContentHashingController : NSObject <GADSignalSource, GADSignal> {
    /* instance variables */
    GADContentQueue *_contentQueue;
    GADScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    GADObserverCollection *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)fingerprintWithServedPenaltyDeduction;
- (void)startContentHashing;
- (void)stopContentHashing;
- (void)getSignalUpdateQueue:(id *)queue signalCreationBlock:(id /* block */ *)block;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@end

#endif /* GADContentHashingController_h */
