//
#ifndef TCRTweetComposerTimerViewDelegate_Protocol_h
#define TCRTweetComposerTimerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRTweetComposerTimerViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tweetComposerTimerViewDidUpdateText:(id)text;
- (void)tweetComposerTimerViewTimerCompleted:(id)completed;

@end

#endif /* TCRTweetComposerTimerViewDelegate_Protocol_h */
