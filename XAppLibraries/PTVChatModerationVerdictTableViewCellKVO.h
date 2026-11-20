//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatModerationVerdictTableViewCellKVO_h
#define PTVChatModerationVerdictTableViewCellKVO_h
@import Foundation;

#include "PTVChatModerationVerdictTableViewCell.h"
#include "PTVMessage.h"

@interface PTVChatModerationVerdictTableViewCellKVO : PTVChatModerationVerdictTableViewCell

@property (retain, nonatomic) PTVMessage *message;

/* instance methods */
- (void)executeState;

@end

#endif /* PTVChatModerationVerdictTableViewCellKVO_h */
