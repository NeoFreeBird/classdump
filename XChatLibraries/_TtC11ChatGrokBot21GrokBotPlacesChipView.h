//
#ifndef _TtC11ChatGrokBot21GrokBotPlacesChipView_h
#define _TtC11ChatGrokBot21GrokBotPlacesChipView_h
@import Foundation;

@class UIControl, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo18UIVisualEffectViewC, _$sSo7UILabelC, _$syycSg, __C.CGSize, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotPlacesChipView : UIControl { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    __C.UIVisualEffectView backgroundView;
    nominal type descriptor for CoreGraphics.CGFloat height;
    __C.UIImageView imageView;
    __C.UILabel label;
    __C.UIEdgeInsets padding;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
    __C.CGSize imageSize;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot21GrokBotPlacesChipView_h */
