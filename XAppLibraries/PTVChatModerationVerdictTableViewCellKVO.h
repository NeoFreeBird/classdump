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
