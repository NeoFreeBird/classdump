//
#ifndef _TtC15TwitterSearchV218SearchBarTextField_h
#define _TtC15TwitterSearchV218SearchBarTextField_h
@import Foundation;

@class NSAttributedString, NSString, Swift.Bool, UIFont, UITextField, _$sSo7UIColorCSg, _$syycSg;

@interface TwitterSearchV2.SearchBarTextField : UITextField { // (Swift)
    /* instance variables */
    (() -> ())? onDeleteBackwardAtStart;
    __C.UIColor? placeholderColor;
    Swift.Bool isApplyingPlaceholderColor;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) UIFont *font;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)invalidateIntrinsicWidth;
- (_Bool)becomeFirstResponder;
- (void)deleteBackward;

@end

#endif /* _TtC15TwitterSearchV218SearchBarTextField_h */
