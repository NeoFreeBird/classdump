//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
