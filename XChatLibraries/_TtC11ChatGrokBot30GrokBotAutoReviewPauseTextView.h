//
#ifndef _TtC11ChatGrokBot30GrokBotAutoReviewPauseTextView_h
#define _TtC11ChatGrokBot30GrokBotAutoReviewPauseTextView_h
@import Foundation;

@class UIView, _$s13XDesignSystem10LinkedTextCMn, _$syycSg;

@interface ChatGrokBot.GrokBotAutoReviewPauseTextView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onOpenPause;
    nominal type descriptor for XDesignSystem.LinkedText linkedText;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot30GrokBotAutoReviewPauseTextView_h */
