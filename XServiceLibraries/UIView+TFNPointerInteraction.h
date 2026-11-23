//
#ifndef UIView_TFNPointerInteraction_h
#define UIView_TFNPointerInteraction_h
@import Foundation;

@interface UIView (TFNPointerInteraction)

/* instance methods */
- (void)tfn_setupRoundRectCursorPointerInteractionsWithMargin:(struct CGSize { double x0; double x1; })margin;
- (void)tfn_setupHoverPointerInteractionsWithTintMode:(long long)mode;
- (void)tfn_setupPointerInteractionsWithStyleProvider:(id /* block */)provider;
- (void)tfn_removePointerInteraction;

@end

#endif /* UIView_TFNPointerInteraction_h */
