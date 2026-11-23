//
#ifndef _TtC14T1TwitterSwift24InlineActionsFloatingBar_h
#define _TtC14T1TwitterSwift24InlineActionsFloatingBar_h
@import Foundation;

@class UIView, _$sSo16TFNTwitterStatusC, _$sSo17TFNTwitterAccountC, _$sSo26TTAStatusInlineActionsViewC, _$sSo34TTAStatusInlineActionsViewDelegate_pSgXw, _$sSo6UIViewC, _$sSo7CALayerC;

@interface T1TwitterSwift.InlineActionsFloatingBar : UIView { // (Swift)
    /* instance variables */
    __C.TTAStatusInlineActionsView actionsView;
    __C.UIView backgroundContainerView;
    __C.CALayer innerShadowLayer;
    __C.TFNTwitterStatus status;
    __C.TFNTwitterAccount account;
    weak __C.TTAStatusInlineActionsViewDelegate? inlineActionsDelegate;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift24InlineActionsFloatingBar_h */
