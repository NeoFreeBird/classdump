//
#ifndef GTMFetcherAuthorizationProtocol_Protocol_h
#define GTMFetcherAuthorizationProtocol_Protocol_h
@import Foundation;

#include "GTMSessionFetcherServiceProtocol-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@protocol GTMFetcherAuthorizationProtocol <NSObject>

@required

@property (nonatomic, readonly) NSString *userEmail;
@property (nonatomic, readonly) _Bool canAuthorize;
@property (nonatomic) _Bool shouldAuthorizeAllRequests;
@property (nonatomic, weak) id <GTMSessionFetcherServiceProtocol> fetcherService;

/* required instance methods */
- (void)authorizeRequest:(id)request delegate:(id)delegate didFinishSelector:(SEL)selector;
- (void)authorizeRequest:(id)request delegate:(id)delegate didFinishSelector:(SEL)selector;
- (void)stopAuthorization;
- (void)stopAuthorizationForRequest:(id)request;
- (void)stopAuthorizationForRequest:(id)request;
- (_Bool)isAuthorizingRequest:(id)request;
- (_Bool)isAuthorizedRequest:(id)request;

@optional

/* optional instance methods */
- (void)authorizeRequest:(id)request completionHandler:(id /* block */)handler;
- (_Bool)primeForRefresh;

@end

#endif /* GTMFetcherAuthorizationProtocol_Protocol_h */
