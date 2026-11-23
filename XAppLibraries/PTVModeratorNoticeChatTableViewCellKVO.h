//
#ifndef PTVModeratorNoticeChatTableViewCellKVO_h
#define PTVModeratorNoticeChatTableViewCellKVO_h
@import Foundation;

#include "PTVInChatPromptTableViewCell.h"
#include "PTVMessage.h"

@interface PTVModeratorNoticeChatTableViewCellKVO : PTVInChatPromptTableViewCell

@property (retain, nonatomic) PTVMessage *message;

/* instance methods */
- (void)executeState;

@end

#endif /* PTVModeratorNoticeChatTableViewCellKVO_h */
