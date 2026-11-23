//
#ifndef _TtC11ChatGrokBot33GrokBotConnectorSourceLinkControl_h
#define _TtC11ChatGrokBot33GrokBotConnectorSourceLinkControl_h
@import Foundation;

@class UIControl, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotConnectorSourceLinkControl : UIControl { // (Swift)
    /* instance variables */
    __C.UIImageView iconView;
    __C.UILabel titleLabel;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot33GrokBotConnectorSourceLinkControl_h */
