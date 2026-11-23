//
#ifndef PTVTooltipDisclosureIndicator_h
#define PTVTooltipDisclosureIndicator_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVTooltip.h"

@class NSString, UIView;

@interface PTVTooltipDisclosureIndicator : UIView {
    /* instance variables */
    PTVExtendedButton *_disclosureButton;
    struct CGSize { double width; double height; } _toolTipSize;
    NSString *_disclosureText;
}

@property (readonly, nonatomic) PTVTooltip *toolTip;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithDisclosureText:(id)text;
- (void)disclosureButtonPressed;
- (void)showTooltip;
- (void)hideTooltip;
- (void)setDisclosureText:(id)text;
- (void)setTooltipTextAndSize;

@end

#endif /* PTVTooltipDisclosureIndicator_h */
