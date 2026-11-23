//
#ifndef PTVWebRTCClientNetworkHelperProtocol_Protocol_h
#define PTVWebRTCClientNetworkHelperProtocol_Protocol_h
@import Foundation;

@protocol PTVWebRTCClientNetworkHelperProtocol

@required

@property (nonatomic, readonly) long long currentReachabilityStatus;

/* required instance methods */
- (void)sendPostRequest:(id)request parameters:(id)parameters completionHandler:(id /* block */)handler;
- (void)get:(id)get responseClass:(Class)_class queryParameters:(id)parameters completionHandler:(id /* block */)handler;
- (void)getTURNServersForGuestBroadcastingWithCompletionHandler:(id /* block */)handler;
- (void)addReachabilityStatusObserver:(id)observer;
- (void)removeReachabilityStatusObserver:(id)observer;

@optional

@end

#endif /* PTVWebRTCClientNetworkHelperProtocol_Protocol_h */
