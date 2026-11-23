//
#ifndef T1SimpleQuickPromoteFlowPresenterDelegate_Protocol_h
#define T1SimpleQuickPromoteFlowPresenterDelegate_Protocol_h
@import Foundation;

@protocol T1SimpleQuickPromoteFlowPresenterDelegate

@required

/* required instance methods */
- (void)simpleQuickPromoteFlowSubmitTweet;
- (void)simpleQuickPromoteFlowDidReceiveTweet;
- (void)simpleQuickPromoteFlowPostDidFail;
- (void)simpleQuickPromoteFlowDidAbandonBoost;

@optional

@end

#endif /* T1SimpleQuickPromoteFlowPresenterDelegate_Protocol_h */
