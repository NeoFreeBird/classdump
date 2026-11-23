//
#ifndef PTVChatCommentTableViewCellKVO_h
#define PTVChatCommentTableViewCellKVO_h
@import Foundation;

#include "PTVChatCommentTableViewCell.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVMessage.h"

@class NSObject;

@interface PTVChatCommentTableViewCellKVO : PTVChatCommentTableViewCell

@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (retain, nonatomic) PTVMessage *comment;

/* instance methods */
- (void)executeState;
- (void)handleTap;

@end

#endif /* PTVChatCommentTableViewCellKVO_h */
