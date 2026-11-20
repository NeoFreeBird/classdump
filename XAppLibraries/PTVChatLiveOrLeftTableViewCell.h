//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatLiveOrLeftTableViewCell_h
#define PTVChatLiveOrLeftTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface PTVChatLiveOrLeftTableViewCell : PTVChatTableViewCell {
    /* instance variables */
    UIImageView *_liveAudioImage;
    UIView *_containerView;
    UILabel *_messageLabel;
}

@property (nonatomic) long long type;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)containerView;
- (void)typeState;

@end

#endif /* PTVChatLiveOrLeftTableViewCell_h */
