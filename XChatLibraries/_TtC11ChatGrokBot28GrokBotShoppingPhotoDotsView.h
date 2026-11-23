//
#ifndef _TtC11ChatGrokBot28GrokBotShoppingPhotoDotsView_h
#define _TtC11ChatGrokBot28GrokBotShoppingPhotoDotsView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIView, _$sSaySo6UIViewCG, _$sSi, _$sSo28UISelectionFeedbackGeneratorC, _$sSo6UIViewC, _$sySicSg;

@interface ChatGrokBot.GrokBotShoppingPhotoDotsView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onScrub;
    Swift.Int page;
    __C.UIView clipView;
    __C.UISelectionFeedbackGenerator selectionFeedback;
    [__C.UIView] dotViews;
    Swift.Int scrubbedPage;
    Swift.Int scrubStartPage;
    Swift.Int windowStart;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)handlePan:(id)pan;

@end

#endif /* _TtC11ChatGrokBot28GrokBotShoppingPhotoDotsView_h */
