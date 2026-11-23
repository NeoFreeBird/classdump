//
#ifndef _TtC13XDesignSystem9Separator_h
#define _TtC13XDesignSystem9Separator_h
@import Foundation;

@class UIView, XDesignSystem.Separator.Variant;

@interface XDesignSystem.Separator : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.Separator.Variant variant;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem9Separator_h */
