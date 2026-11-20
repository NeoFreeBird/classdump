//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatTipTableViewCell_h
#define PTVChatTipTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"

@class NSAttributedString, UIImage, UIImageView, UILabel, UIView;

@interface PTVChatTipTableViewCell : PTVChatTableViewCell {
    /* instance variables */
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSAttributedString *title;

/* instance methods */
- (void)layoutSubviews;
- (id)containerView;

@end

#endif /* PTVChatTipTableViewCell_h */
