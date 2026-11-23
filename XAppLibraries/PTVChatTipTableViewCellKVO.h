//
#ifndef PTVChatTipTableViewCellKVO_h
#define PTVChatTipTableViewCellKVO_h
@import Foundation;

#include "PTVChatTipTableViewCell.h"
#include "PTVMessage.h"

@interface PTVChatTipTableViewCellKVO : PTVChatTipTableViewCell

@property (retain, nonatomic) PTVMessage *message;

/* instance methods */
- (void)executeState;
- (void)setUseLargeChatFont:(_Bool)font;
- (void)handleTap;

@end

#endif /* PTVChatTipTableViewCellKVO_h */
