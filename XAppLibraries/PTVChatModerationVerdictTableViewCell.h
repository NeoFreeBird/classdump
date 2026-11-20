//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
