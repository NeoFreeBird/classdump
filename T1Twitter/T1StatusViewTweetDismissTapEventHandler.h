//
#ifndef T1StatusViewTweetDismissTapEventHandler_h
#define T1StatusViewTweetDismissTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewTweetDismissTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (void)_dataViewController:(id)controller dismissItemIfNeeded:(id)needed withInfo:(id)info inCell:(id)cell;

@end

#endif /* T1StatusViewTweetDismissTapEventHandler_h */
