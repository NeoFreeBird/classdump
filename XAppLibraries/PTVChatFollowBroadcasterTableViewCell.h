//
#ifndef PTVChatFollowBroadcasterTableViewCell_h
#define PTVChatFollowBroadcasterTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCell.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface PTVChatFollowBroadcasterTableViewCell : PTVChatTableViewCell <UIGestureRecognizerDelegate> {
    /* instance variables */
    UIView *_containerView;
    _Bool _isFollowing;
    UILabel *_followLabel;
    UIImageView *_followImage;
    UIImageView *_unfollowImage;
    NSString *_displayName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)layoutSubviews;
- (void)layoutFollowLabel;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)containerView;
- (void)setUseLargeChatFont:(_Bool)font;
- (void)setDisplayName:(id)name;
- (void)displayNameAttributedStateChanged;
- (void)setIsFollowing:(_Bool)following;
- (void)followAlphaState;

@end

#endif /* PTVChatFollowBroadcasterTableViewCell_h */
