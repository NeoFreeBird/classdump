//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatTwitterViewTableViewCell_h
#define PTVChatTwitterViewTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"

@class UIView;

@interface PTVChatTwitterViewTableViewCell : PTVChatTableViewCell

@property (weak, nonatomic) UIView *twitterView;

/* instance methods */
- (void)layoutSubviews;
- (id)containerView;

@end

#endif /* PTVChatTwitterViewTableViewCell_h */
