//
#ifndef TFNInlineTooltipViewCell_h
#define TFNInlineTooltipViewCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@interface TFNInlineTooltipViewCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 inlineTooltipView;
    B24@0:8@"NSString"16 $__lazy_storage_$_inlineTooltipViewLayoutConstraints;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)updateConstraints;
- (id)calculatedLayoutMetrics;

@end

#endif /* TFNInlineTooltipViewCell_h */
