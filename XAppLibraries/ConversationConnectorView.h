//
#ifndef ConversationConnectorView_h
#define ConversationConnectorView_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TUIAvatarImageView.h"

@class TIPImagePipeline, UIImageView, UIView;

@interface ConversationConnectorView : UIView

@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) TUIAvatarImageView *avatarImageView;
@property (nonatomic) long long terminals;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;

/* class methods */
+ (id)conversationConnectorView;
+ (id)conversationConnectorViewWithTerminals:(long long)terminals;
+ (id)_t1_conversationConnectorImageWithEllipsis;
+ (id)_t1_conversationConnectorImage;
+ (double)connectorAvatarHeightForLayoutMetrics:(id)metrics;
+ (double)connectorAvatarBottomPadding;
+ (id)connectorColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_t1_initImageView;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_t1_initializeAvatarView;

@end

#endif /* ConversationConnectorView_h */
