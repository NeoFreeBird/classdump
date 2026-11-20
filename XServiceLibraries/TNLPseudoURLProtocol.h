//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLPseudoURLProtocol_h
#define TNLPseudoURLProtocol_h
@import Foundation;

@class NSCachedURLResponse, NSObject, NSURLProtocol;
@protocol OS_dispatch_queue;

@interface TNLPseudoURLProtocol : NSURLProtocol {
    /* instance variables */
    _Bool _stopped;
    NSCachedURLResponse *_responseToUse;
    NSObject<OS_dispatch_queue> *_protocolQueue;
    struct __CFRunLoop * _protocolRunLoop;
}

/* class methods */
+ (void)registerURLResponse:(id)urlresponse body:(id)body withEndpoint:(id)endpoint;
+ (void)registerURLResponse:(id)urlresponse body:(id)body config:(id)config withEndpoint:(id)endpoint;
+ (void)unregisterEndpoint:(id)endpoint;
+ (void)unregisterAllEndpoints;
+ (_Bool)isEndpointRegistered:(id)registered;
+ (void)initialize;
+ (_Bool)canInitWithRequest:(id)request;
+ (id)canonicalRequestForRequest:(id)request;
+ (_Bool)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;

/* instance methods */
- (void)startLoading;
- (void)stopLoading;
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;

@end

#endif /* TNLPseudoURLProtocol_h */
