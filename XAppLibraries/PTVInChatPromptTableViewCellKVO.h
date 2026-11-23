//
#ifndef PTVInChatPromptTableViewCellKVO_h
#define PTVInChatPromptTableViewCellKVO_h
@import Foundation;

#include "PTVInChatPromptTableViewCell.h"
#include "PTVMessage.h"

@interface PTVInChatPromptTableViewCellKVO : PTVInChatPromptTableViewCell

@property (retain, nonatomic) PTVMessage *message;

/* instance methods */
- (void)executeState;
- (void)handleTap;

@end

#endif /* PTVInChatPromptTableViewCellKVO_h */
