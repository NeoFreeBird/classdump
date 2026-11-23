//
#ifndef GADRemoteConfigurationSource_h
#define GADRemoteConfigurationSource_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSDate, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADRemoteConfigurationSource : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    _Bool _isConfigurationUpdatePublisherInitiated;
    _Bool _refreshIsInProgress;
    NSDate *_lastConfigurationRefreshTimestamp;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

@property (readonly, nonatomic) _Bool didRefreshSinceAppStart;
@property (readonly, nonatomic) NSDictionary *appSettingsJSON;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)refreshFromPublisherRequest;
- (void)refresh;
- (void)refreshIfNeededWithAppIDChanged:(_Bool)idchanged;
- (void)saveLastRequestedAdUnitIDIfNeeded:(id)needed;
- (void)refreshWithCompletionHandler:(id /* block */)handler;
- (void)processRemoteConfigurationResult:(id)result error:(id)error completionHandler:(id /* block */)handler;

@end

#endif /* GADRemoteConfigurationSource_h */
