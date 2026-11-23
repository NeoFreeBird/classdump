//
#ifndef PTVActionSheetButton_h
#define PTVActionSheetButton_h
@import Foundation;

@class NSAttributedString, UIButton, UIColor, UIView;

@interface PTVActionSheetButton : UIButton {
    /* instance variables */
    UIView *_topDividerLine;
}

@property (nonatomic) double verticalPaddingOverride;
@property (retain, nonatomic) UIColor *unHighlightedColorOverride;
@property (retain, nonatomic) NSAttributedString *attributedTitle;

/* class methods */
+ (id)buttonWithAttributedTitle:(id)title;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)highlighted;
- (void)setEnabled:(_Bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* PTVActionSheetButton_h */
