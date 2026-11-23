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
