//
#ifndef PTVTooltipButtonGroup_Protocol_h
#define PTVTooltipButtonGroup_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTooltipButtonGroup <NSObject>

@required

@optional

/* optional instance methods */
- (void)tooltipButtonWillShowTooltip:(id)tooltip;
- (void)tooltipButtonDidShowTooltip:(id)tooltip;
- (void)tooltipButtonWillHideTooltip:(id)tooltip;
- (void)tooltipButtonDidHideTooltip:(id)tooltip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fittingFrameForTooltipButton:(id)button;

@end

#endif /* PTVTooltipButtonGroup_Protocol_h */
