//
#ifndef PTVWebRTCClientNetworkHelper_h
#define PTVWebRTCClientNetworkHelper_h
@import Foundation;

#include "PTVGuestRoomConfiguration.h"
#include "PTVLoggedInUserCookieProtocol-Protocol.h"
#include "PTVWebRTCClientNetworkHelperProtocol-Protocol.h"

@class NSObject;

@interface PTVWebRTCClientNetworkHelper : NSObject <PTVWebRTCClientNetworkHelperProtocol>

@property (readonly, nonatomic) long long currentReachabilityStatus;
@property (readonly, nonatomic) id <PTVLoggedInUserCookieProtocol> loggedInUser;
@property (readonly, nonatomic) PTVGuestRoomConfiguration *configuration;

/* instance methods */
- (id)initWithLoggedInUser:(id)user configuration:(id)configuration;
- (void)sendPostRequest:(id)request parameters:(id)parameters completionHandler:(id /* block */)handler;
- (void)get:(id)get responseClass:(Class)_class queryParameters:(id)parameters completionHandler:(id /* block */)handler;
- (void)getTURNServersForGuestBroadcastingWithCompletionHandler:(id /* block */)handler;
- (void)addReachabilityStatusObserver:(id)observer;
- (void)removeReachabilityStatusObserver:(id)observer;

@end

#endif /* PTVWebRTCClientNetworkHelper_h */
