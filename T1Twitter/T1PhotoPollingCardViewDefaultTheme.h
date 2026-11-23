//
#ifndef T1PhotoPollingCardViewDefaultTheme_h
#define T1PhotoPollingCardViewDefaultTheme_h
@import Foundation;

#include "T1PollingCardViewTheme.h"

@interface T1PhotoPollingCardViewDefaultTheme : T1PollingCardViewTheme

/* instance methods */
- (_Bool)hasBorder;
- (_Bool)choiceContainerHasBorder;
- (_Bool)resultContainerHasBorder;
- (_Bool)statusContainerHasBorder;
- (id)highlightContainerBackgroundColor;
- (double)highlightContainerCornerRadius;
- (id)voteCountAndTimeBackgroundColor;
- (id)voteCountAndTimeTextColor;
- (id)voteCountAndTimeTextFont;
- (_Bool)shouldUseCustomChoiceButton;
- (double)choiceButtonCornerRadius;
- (double)choiceButtonBorderWidth;
- (id)choiceButtonBorderColor;
- (id)choiceButtonBackgroundColor;
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

#endif /* T1PhotoPollingCardViewDefaultTheme_h */
