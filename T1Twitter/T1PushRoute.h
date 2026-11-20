//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PushRoute_h
#define T1PushRoute_h
@import Foundation;

#include "T1PushNotificationRoute-Protocol.h"

@class NSMapTable, NSObject, NSString;

@interface T1PushRoute : NSObject <T1PushNotificationRoute>

@property (readonly, nonatomic) NSMapTable *homeTimelineRefreshByAccount;
@property (readonly, nonatomic) NSMapTable *followerRequestsRefreshByAccount;
@property (readonly, nonatomic) NSMapTable *accountRefreshByAccount;
@property (readonly, nonatomic) NSMapTable *paymentsRefreshByAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)handlePushPayload:(id)payload routeContext:(id)context;
- (id)t1_throttledBlockForAccountMapping:(id)mapping account:(id)account block:(id /* block */)block;
- (id)t1_homeTimelineRefreshForAccount:(id)account;
- (id)t1_followerRequestsRefreshForAccount:(id)account;
- (id)t1_accountRefreshForAccount:(id)account;
- (id)t1_paymentsRefreshForAccount:(id)account;
- (void)willRoutePushPayload:(id)payload context:(long long)context;

@end

#endif /* T1PushRoute_h */
