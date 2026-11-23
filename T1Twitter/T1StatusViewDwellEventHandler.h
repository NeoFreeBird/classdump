//
#ifndef T1StatusViewDwellEventHandler_h
#define T1StatusViewDwellEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewDwellEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewDwellEventHandler_h */
