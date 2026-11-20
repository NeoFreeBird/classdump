//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem12ListCheckbox_h
#define _TtC13XDesignSystem12ListCheckbox_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.ListItem.CheckboxStyle, _$sSo12CAShapeLayerC, _$sSo7CALayerC, _$sSo7UIColorC;

@interface XDesignSystem.ListCheckbox : UIView { // (Swift)
    /* instance variables */
    __C.CALayer boxLayer;
    __C.CALayer fillLayer;
    __C.CAShapeLayer checkLayer;
    Swift.Bool isSelected;
    XDesignSystem.ListItem.CheckboxStyle style;
    __C.UIColor fillColor;
    __C.UIColor checkmarkColor;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem12ListCheckbox_h */
