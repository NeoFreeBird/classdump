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
