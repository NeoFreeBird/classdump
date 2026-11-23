//
#ifndef T1StatusViewAttributionTapEventHandler_h
#define T1StatusViewAttributionTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewAttributionTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewAttributionTapEventHandler_h */
