//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVModerationVotingViewDelegate_Protocol_h
#define PTVModerationVotingViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVModerationVotingViewDelegate <NSObject>

@required

/* required instance methods */
- (void)moderationDidPressGuiltyOfAbuse;
- (void)moderationDidPressGuiltyOfSpam;
- (void)moderationDidPressGuiltyOfSexualContent;
- (void)moderationDidPressInnocent;
- (void)moderationDidPressNotSure;
- (void)moderationDidPressLearnMore;

@optional

@end

#endif /* PTVModerationVotingViewDelegate_Protocol_h */
