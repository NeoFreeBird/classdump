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
