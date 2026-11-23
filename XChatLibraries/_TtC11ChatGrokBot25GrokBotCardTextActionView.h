//
#ifndef _TtC11ChatGrokBot25GrokBotCardTextActionView_h
#define _TtC11ChatGrokBot25GrokBotCardTextActionView_h
@import Foundation;

@class UIControl, _$sSo11UIImageViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCardTextActionView : UIControl { // (Swift)
    /* instance variables */
    __C.UIImageView chevronView;
    __C.UILabel titleLabel;
    (() -> ())? onTap;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isEnabled;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot25GrokBotCardTextActionView_h */
