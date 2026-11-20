//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TextPollingCardViewMomentsTheme_h
#define T1TextPollingCardViewMomentsTheme_h
@import Foundation;

#include "T1PollingCardViewTheme.h"

@interface T1TextPollingCardViewMomentsTheme : T1PollingCardViewTheme

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

#endif /* T1TextPollingCardViewMomentsTheme_h */
