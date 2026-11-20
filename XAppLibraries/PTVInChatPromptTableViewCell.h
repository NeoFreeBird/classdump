//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVInChatPromptTableViewCell_h
#define PTVInChatPromptTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface PTVInChatPromptTableViewCell : PTVChatTableViewCell {
    /* instance variables */
    UIView *_containerView;
    UILabel *_messageLabel;
    NSString *_inChatPromptMessage;
    UIImage *_inChatPromptIcon;
    UIImageView *_iconView;
}

/* instance methods */
- (void)layoutSubviews;
- (id)containerView;
- (void)setUseLargeChatFont:(_Bool)font;
- (void)setLocalizedInChatPromptMessage:(id)message;
- (void)setLocalizedInChatPromptIcon:(id)icon;
- (void)messageAttributedLabelStateDidChange;

@end

#endif /* PTVInChatPromptTableViewCell_h */
