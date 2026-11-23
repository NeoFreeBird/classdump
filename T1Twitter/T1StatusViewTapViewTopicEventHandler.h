//
#ifndef T1StatusViewTapViewTopicEventHandler_h
#define T1StatusViewTapViewTopicEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewTapViewTopicEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewTapViewTopicEventHandler_h */
