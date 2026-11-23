//
#ifndef GULReachabilityDelegate_Protocol_h
#define GULReachabilityDelegate_Protocol_h
@import Foundation;

@protocol GULReachabilityDelegate

@required

/* required instance methods */
- (void)reachability:(id)reachability statusChanged:(int)changed;

@optional

@end

#endif /* GULReachabilityDelegate_Protocol_h */
