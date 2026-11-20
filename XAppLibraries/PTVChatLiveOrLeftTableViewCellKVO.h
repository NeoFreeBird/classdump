//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
