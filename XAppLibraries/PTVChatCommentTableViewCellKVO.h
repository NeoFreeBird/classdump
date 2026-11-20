//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
