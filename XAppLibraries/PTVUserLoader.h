//
#ifndef PTVUserLoader_h
#define PTVUserLoader_h
@import Foundation;

#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVMergeParticipantUser.h"
#include "PTVWorkClientLoader.h"

@class NSObject, NSString;

@interface PTVUserLoader : PTVWorkClientLoader

@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) NSString *remoteUserID;
@property (readonly, nonatomic) PTVMergeParticipantUser *user;

/* class methods */
+ (void)loadUserFromNetworkWithRemoteID:(id)id loggedInUser:(id)user callback:(id /* block */)callback;

/* instance methods */
- (void)performLoadWithWorkClient:(id)client cachePolicy:(long long)policy;
- (void)didReceiveCachedData:(id)data;
- (void)didReceiveNetworkData:(id)data;
- (id)initWithCachePolicy:(long long)policy loggedInUser:(id)user remoteUserID:(id)id;

@end

#endif /* PTVUserLoader_h */
