//
#ifndef TFNTwitterLivePipelineService_h
#define TFNTwitterLivePipelineService_h
@import Foundation;

#include "TFSTwitterLivePipelineService-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, TFSTwitterAPI;

@interface TFNTwitterLivePipelineService : NSObject <TFSTwitterLivePipelineService>

@property (retain, nonatomic) TFSTwitterAPI *twitterAPI;
@property (retain, nonatomic) NSMutableDictionary *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)clientsQueue;

/* instance methods */
- (id)initWithTwitterAPI:(id)api;
- (void)_deviceFeatureSwitchesDidChange:(id)change;
- (void)_accountDidBecomeInactive:(id)inactive;
- (void)_applicationWillEnterForeground:(id)foreground;
- (void)_applicationDidEnterBackground:(id)background;
- (id)clientForAccount:(id)account;

@end

#endif /* TFNTwitterLivePipelineService_h */
