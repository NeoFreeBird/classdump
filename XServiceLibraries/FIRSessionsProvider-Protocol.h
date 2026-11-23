//
#ifndef FIRSessionsProvider_Protocol_h
#define FIRSessionsProvider_Protocol_h
@import Foundation;

@protocol FIRSessionsProvider

@required

/* required instance methods */
- (void)registerWithSubscriber:(id)subscriber;

@optional

@end

#endif /* FIRSessionsProvider_Protocol_h */
