//
#ifndef T1StatusViewUndoTweetTapEventHandler_h
#define T1StatusViewUndoTweetTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewUndoTweetTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewUndoTweetTapEventHandler_h */
