//
#ifndef _TtC11ChatGrokBot33GrokBotOrderAutoApproveHeaderView_h
#define _TtC11ChatGrokBot33GrokBotOrderAutoApproveHeaderView_h
@import Foundation;

@class UIControl, _$sSo11UIImageViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotOrderAutoApproveHeaderView : UIControl { // (Swift)
    /* instance variables */
    __C.UIImageView chevronView;
    __C.UIImageView iconView;
    __C.UILabel summaryLabel;
    __C.UILabel titleLabel;
    (() -> ())? onToggle;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot33GrokBotOrderAutoApproveHeaderView_h */
