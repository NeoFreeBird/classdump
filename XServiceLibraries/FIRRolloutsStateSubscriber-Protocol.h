//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRRolloutsStateSubscriber_Protocol_h
#define FIRRolloutsStateSubscriber_Protocol_h
@import Foundation;

@protocol FIRRolloutsStateSubscriber

@required

/* required instance methods */
- (void)rolloutsStateDidChange:(id)change;

@optional

@end

#endif /* FIRRolloutsStateSubscriber_Protocol_h */
