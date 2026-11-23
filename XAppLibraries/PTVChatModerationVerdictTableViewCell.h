//
#ifndef PTVChatModerationVerdictTableViewCell_h
#define PTVChatModerationVerdictTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"

@class UILabel, UIView;

@interface PTVChatModerationVerdictTableViewCell : PTVChatTableViewCell {
    /* instance variables */
    UIView *_containerView;
    UILabel *_messageLabel;
    UIView *_destructiveHighlightView;
    unsigned long long _verdictType;
}

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)containerView;
- (void)setModerationType:(unsigned long long)type;
- (void)destructiveHighlightColorState;

@end

#endif /* PTVChatModerationVerdictTableViewCell_h */
