//
#ifndef T1TweetComposeConversationControlButton_h
#define T1TweetComposeConversationControlButton_h
@import Foundation;

@class NSString, UIColor, UIControl, UIImageView, UILabel;

@interface T1TweetComposeConversationControlButton : UIControl

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long numberOfLines;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForConversationControlTypes:(id)types fitSize:(struct CGSize { double x0; double x1; })size numberOfLines:(unsigned long long)lines useCheckmarkLabeling:(_Bool)labeling useSubscriptionsNaming:(_Bool)naming;
+ (struct CGSize { double x0; double x1; })sizeForAudienceControlSuperFollow:(struct CGSize { double x0; double x1; })follow numberOfLines:(unsigned long long)lines;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHighlighted:(_Bool)highlighted;
- (void)_t1_updateTextAndTintColor;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setUserInteractionEnabled:(_Bool)enabled;
- (id)accessibilityLabel;

@end

#endif /* T1TweetComposeConversationControlButton_h */
