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
