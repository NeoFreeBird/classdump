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
