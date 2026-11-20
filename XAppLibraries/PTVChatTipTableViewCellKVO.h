//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
