//
#ifndef TPSHost_h
#define TPSHost_h
@import Foundation;

#include "TFSFeatureSwitchesHosting-Protocol.h"
#include "TLTBackgroundTaskManager.h"
#include "TPSHostBridgeScribeDelegate.h"

@class NSHashTable, NSMapTable, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, TPSHostAuthenticatedServicesProvider;

@interface TPSHost : NSObject <TFSFeatureSwitchesHosting>

@property (retain, nonatomic) NSMapTable *scribeRegistry;
@property (retain, nonatomic) NSMutableDictionary *loggerRegistry;
@property (retain, nonatomic) TPSHostBridgeScribeDelegate *guestScribe;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registryQueue;
@property (retain, nonatomic) TLTBackgroundTaskManager *backgroundTaskManager;
@property (retain, nonatomic) NSMutableDictionary *taskHandleMap;
@property (retain, nonatomic) NSHashTable *accountFeatureSwitches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accountFeatureSwitchesQueue;
@property (retain, nonatomic) id <TPSHostAuthenticatedServicesProvider> authenticatedServicesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)shutdown;
- (id)initWithAuthenticatedServicesProvider:(id)provider;
- (void)dealloc;
- (void)registerFeatureSwitches:(id)switches;
- (void)_tfn_featureSwitchesDidUpdateForAccountIDNotification:(id)idnotification;
- (void)_tfn_featureSwitchesRequireRestart;
- (void)_tfn_featureSwitchesArchiveDidStartNotification:(id)notification;
- (void)_tfn_featureSwitchesArchiveDidEndForAccountIDNotification:(id)idnotification;
- (id)featureSwitchesFetchTask;
- (id)featureSwitchesEventLoggingForAccountID:(id)id;

@end

#endif /* TPSHost_h */
