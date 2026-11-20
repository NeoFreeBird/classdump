//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatTwitterViewTableViewCellKVO_h
#define PTVChatTwitterViewTableViewCellKVO_h
@import Foundation;

#include "PTVChatTwitterViewTableViewCell.h"
#include "PTVMessage.h"

@interface PTVChatTwitterViewTableViewCellKVO : PTVChatTwitterViewTableViewCell

@property (retain, nonatomic) PTVMessage *message;

/* instance methods */

@end

#endif /* PTVChatTwitterViewTableViewCellKVO_h */
