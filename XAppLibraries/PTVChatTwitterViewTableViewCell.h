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
