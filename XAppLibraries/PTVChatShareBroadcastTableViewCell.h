//
#ifndef PTVChatShareBroadcastTableViewCell_h
#define PTVChatShareBroadcastTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface PTVChatShareBroadcastTableViewCell : PTVChatTableViewCell {
    /* instance variables */
    UIView *_containerView;
    UILabel *_shareLabel;
    UIImageView *_shareImage;
    UIImageView *_shareImageSelected;
    _Bool _didSelectShare;
    _Bool _sharePromptTriggeredByScreenshot;
}

@property (retain, nonatomic) NSString *overrideCopy;

/* instance methods */
- (void)layoutSubviews;
- (void)layoutButtons;
- (void)layoutShareLabel;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setUseLargeChatFont:(_Bool)font;
- (id)containerView;
- (void)setIsScreenshotPrompt:(_Bool)prompt;
- (void)shareCellAlphaState;

@end

#endif /* PTVChatShareBroadcastTableViewCell_h */
