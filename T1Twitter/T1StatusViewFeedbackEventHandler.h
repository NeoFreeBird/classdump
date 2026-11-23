//
#ifndef T1StatusViewFeedbackEventHandler_h
#define T1StatusViewFeedbackEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewFeedbackEventHandler : NSObject // (Swift)

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (id)init;

@end

#endif /* T1StatusViewFeedbackEventHandler_h */
