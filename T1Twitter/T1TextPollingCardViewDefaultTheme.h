//
#ifndef T1TextPollingCardViewDefaultTheme_h
#define T1TextPollingCardViewDefaultTheme_h
@import Foundation;

#include "T1PollingCardViewTheme.h"

@interface T1TextPollingCardViewDefaultTheme : T1PollingCardViewTheme

/* instance methods */
- (_Bool)hasBorder;
- (id)borderColor;
- (double)cornerRadius;
- (double)borderWidth;
- (_Bool)choiceContainerHasBorder;
- (_Bool)resultContainerHasBorder;
- (_Bool)statusContainerHasBorder;
- (id)highlightContainerBackgroundColor;
- (double)highlightContainerCornerRadius;
- (id)voteCountAndTimeBackgroundColor;
- (id)voteCountAndTimeTextColor;
- (id)voteCountAndTimeTextFont;
- (_Bool)shouldUseCustomChoiceButton;
- (double)choiceButtonBorderWidth;
- (id)choiceButtonBorderColor;
- (id)choiceButtonTextFont;
- (double)pollBarCornerRadius;
- (id)colorBarBackgroundColor;
- (id)choiceLabelTextFont;
- (id)choiceLabelTextColor;
- (double)pollBarGraphHeight;
- (id)choiceLabelWinnerFont;
- (id)choiceLabelWinnerBackgroundColor;
- (id)choiceButtonHighlightedBackgroundColor;
- (id)choiceButtonHighlightedTextColor;
- (struct CGSize { double x0; double x1; })choiceCheckmarkSize;
- (double)imageCornerRadius;
- (id)imageGradientBottomColor;
- (double)imageInnerShadowRadius;
- (id)imageInnerShadowColor;
- (id)imageHighlightContainerBackgroundColor;

@end

#endif /* T1TextPollingCardViewDefaultTheme_h */
