//
#ifndef _TtC13QuickComposer29QuickComposerRestingDraftView_h
#define _TtC13QuickComposer29QuickComposerRestingDraftView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo10UITextViewC, _$sSo18NSAttributedStringCSg, _$sSo7UIColorCSg, _$syycSg;

@interface QuickComposer.QuickComposerRestingDraftView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onActivate;
    __C.NSAttributedString? attributedText;
    __C.UIColor? textColor;
    nominal type descriptor for CoreGraphics.CGFloat maximumPointSize;
    __C.UITextView textView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityActivate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13QuickComposer29QuickComposerRestingDraftView_h */
