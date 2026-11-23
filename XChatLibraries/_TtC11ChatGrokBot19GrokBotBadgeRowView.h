//
#ifndef _TtC11ChatGrokBot19GrokBotBadgeRowView_h
#define _TtC11ChatGrokBot19GrokBotBadgeRowView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotBadge, _$sSaySo11UIImageViewCG, __C.CGSize;

@interface ChatGrokBot.GrokBotBadgeRowView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> ChatGrokBot.GrokBotBadge badges;
    __C.CGSize size;
    [__C.UIImageView] badgeImageViews;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot19GrokBotBadgeRowView_h */
