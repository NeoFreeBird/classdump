//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
