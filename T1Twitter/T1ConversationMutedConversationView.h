//
#ifndef T1ConversationMutedConversationView_h
#define T1ConversationMutedConversationView_h
@import Foundation;

@class UILabel, UIView;

@interface T1ConversationMutedConversationView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topSeparator;
@property (nonatomic) _Bool topSeparatorHidden;

/* class methods */
+ (id)mutedConversationAttributedString;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (_Bool)isTopSeparatorHidden;

@end

#endif /* T1ConversationMutedConversationView_h */
