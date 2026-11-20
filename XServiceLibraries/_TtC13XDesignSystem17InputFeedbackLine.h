//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem17InputFeedbackLine_h
#define _TtC13XDesignSystem17InputFeedbackLine_h
@import Foundation;

@class UIView, XDesignSystem.InputFeedbackLine.Content, XDesignSystem.LinkedText, _$sSo11UIImageViewC, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC;

@interface XDesignSystem.InputFeedbackLine : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.InputFeedbackLine.Content content;
    __C.UIImageView iconView;
    __C.UILabel label;
    XDesignSystem.LinkedText linkedText;
    __C.UIActivityIndicatorView spinner;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem17InputFeedbackLine_h */
