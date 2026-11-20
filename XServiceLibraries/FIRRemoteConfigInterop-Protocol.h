//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRRemoteConfigInterop_Protocol_h
#define FIRRemoteConfigInterop_Protocol_h
@import Foundation;

@protocol FIRRemoteConfigInterop

@required

/* required instance methods */
- (void)registerRolloutsStateSubscriber:(id)subscriber for:(id)_for;

@optional

@end

#endif /* FIRRemoteConfigInterop_Protocol_h */
