//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
