//
#ifndef GADNetworkPath_h
#define GADNetworkPath_h
@import Foundation;

#include "GADSignal-Protocol.h"

@class NSArray, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface GADNetworkPath : NSObject <GADSignal> {
    /* instance variables */
    NSObject<OS_nw_path_monitor> *_networkMonitor;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSNumber *_status;
    NSArray *_interfaceTypes;
    NSArray *_lastKnownInterfaceTypes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@end

#endif /* GADNetworkPath_h */
