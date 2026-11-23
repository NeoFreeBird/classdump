//
#ifndef PTVPeriscopeVideoAccessManager_h
#define PTVPeriscopeVideoAccessManager_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVVideoAccessManager.h"
#include "PTVWatchContext.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSObject, NSString;

@interface PTVPeriscopeVideoAccessManager : PTVVideoAccessManager <PTVWorkClientDelegate>

@property (readonly, nonatomic) PTVWorkClient *accessVideoWorkClient;
@property (readonly, nonatomic) PTVBroadcast *broadcast;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) PTVWatchContext *watchContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (id)initWithDelegate:(id)delegate broadcast:(id)broadcast loggedInUser:(id)user watchContext:(id)context;
- (void)fetchVideoAccessWithCachePolicy:(long long)policy;
- (void)loadVideoAccessWithCachePolicy:(long long)policy;
- (void)willBeginReloadingVideoAccess;
- (void)didFailToFetchVideoAccessWithError:(id)error;

@end

#endif /* PTVPeriscopeVideoAccessManager_h */
