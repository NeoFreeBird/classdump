//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLNetwork_h
#define TNLNetwork_h
@import Foundation;

@interface TNLNetwork : <ROOT>

/* class methods */
+ (_Bool)hasExecutingNetworkConnections;
+ (void)incrementExecutingNetworkConnections;
+ (void)decrementExecutingNetworkConnections;
+ (void)backoffSignalEncounteredForURL:(id)url host:(id)host responseHTTPHeaders:(id)httpheaders;
+ (void)HTTPURLResponseEncounteredOutsideOfTNL:(id)tnl host:(id)host;
+ (void)applyBackoffDependenciesToOperation:(id)operation withURL:(id)url host:(id)host isLongPollRequest:(_Bool)request;

@end

#endif /* TNLNetwork_h */
