//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
