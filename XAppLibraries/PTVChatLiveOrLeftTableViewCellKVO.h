//
#ifndef PTVChatLiveOrLeftTableViewCellKVO_h
#define PTVChatLiveOrLeftTableViewCellKVO_h
@import Foundation;

#include "PTVChatLiveOrLeftTableViewCell.h"
#include "PTVMessage.h"

@interface PTVChatLiveOrLeftTableViewCellKVO : PTVChatLiveOrLeftTableViewCell

@property (retain, nonatomic) PTVMessage *message;

/* instance methods */

@end

#endif /* PTVChatLiveOrLeftTableViewCellKVO_h */
