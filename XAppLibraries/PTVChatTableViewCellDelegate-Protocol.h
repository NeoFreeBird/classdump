//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatTableViewCellDelegate_Protocol_h
#define PTVChatTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatTableViewCellDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatTableViewCell:(id)cell didTapMessage:(id)message;

@end

#endif /* PTVChatTableViewCellDelegate_Protocol_h */
