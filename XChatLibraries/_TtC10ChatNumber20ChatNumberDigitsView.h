//
#ifndef _TtC10ChatNumber20ChatNumberDigitsView_h
#define _TtC10ChatNumber20ChatNumberDigitsView_h
@import Foundation;

@class UIControl, _$s13XDesignSystem11PressEffectCMn ?, _$s13XDesignSystem18LoadingPulseEffectCMn ?, _$sSS, _$sSa -> ChatNumber.ChatNumberDigitsView.Cell, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIFontC, _$sSo6UIViewC;

@interface ChatNumber.ChatNumberDigitsView : UIControl { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    __C.UIView digitRowView;
    Swift.Array -> ChatNumber.ChatNumberDigitsView.Cell cells;
    Swift.String digits;
    __C.UIFont digitFont;
    __C.UIImpactFeedbackGenerator tapFeedbackGenerator;
    nominal type descriptor for XDesignSystem.PressEffect ? $__lazy_storage_$_pressEffect;
    nominal type descriptor for XDesignSystem.LoadingPulseEffect ? $__lazy_storage_$_loadingPulseEffect;
}

@property (nonatomic) _Bool enabled;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)isEnabled;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)prepareTapFeedback;
- (void)playTapFeedback;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10ChatNumber20ChatNumberDigitsView_h */
