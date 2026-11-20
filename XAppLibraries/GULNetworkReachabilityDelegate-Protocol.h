//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GULNetworkReachabilityDelegate_Protocol_h
#define GULNetworkReachabilityDelegate_Protocol_h
@import Foundation;

@protocol GULNetworkReachabilityDelegate

@required

/* required instance methods */
- (void)reachabilityDidChange;

@optional

@end

#endif /* GULNetworkReachabilityDelegate_Protocol_h */
