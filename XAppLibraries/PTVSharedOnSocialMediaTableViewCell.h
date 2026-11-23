//
#ifndef PTVSharedOnSocialMediaTableViewCell_h
#define PTVSharedOnSocialMediaTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"
#include "PTVMessage.h"
#include "PTVSharedOnSocialMediaTableViewCellContentView.h"

@interface PTVSharedOnSocialMediaTableViewCell : PTVChatTableViewCell {
    /* instance variables */
    PTVSharedOnSocialMediaTableViewCellContentView *_containerView;
}

@property (retain, nonatomic) PTVMessage *message;

/* instance methods */
- (void)layoutSubviews;
- (id)containerView;
- (void)setUseLargeChatFont:(_Bool)font;
- (void)executeState;
- (void)handleTap;
- (void)setUsername:(id)username;
- (void)setShareMessageType:(long long)type;
- (void)setParticipantIndex:(long long)index;

@end

#endif /* PTVSharedOnSocialMediaTableViewCell_h */
