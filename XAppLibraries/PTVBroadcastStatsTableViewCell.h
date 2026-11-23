//
#ifndef PTVBroadcastStatsTableViewCell_h
#define PTVBroadcastStatsTableViewCell_h
@import Foundation;

#include "PTVBroadcastDetailsTableViewCell.h"
#include "PTVTooltipDisclosureIndicator.h"

@class CAGradientLayer, NSArray, NSMutableArray, UILabel, UIView;

@interface PTVBroadcastStatsTableViewCell : PTVBroadcastDetailsTableViewCell {
    /* instance variables */
    UIView *_containerView;
    NSMutableArray *_nameLabels;
    NSMutableArray *_valueLabels;
    NSMutableArray *_separatorLines;
    UILabel *_collapsedLabel;
    CAGradientLayer *_gradientLayer;
    NSArray *_nameLabelColors;
    NSArray *_labelDisplayStyles;
    PTVTooltipDisclosureIndicator *_timeWatchedPerMinuteInfoButton;
    int _timeWatchedPerMinuteIndex;
}

@property (nonatomic) _Bool isCollapsed;
@property (nonatomic) _Bool showsGradientBackground;

/* class methods */
+ (id)CollapsedLabelColor;
+ (id)LiveNameColor;
+ (id)ReplayNameColor;
+ (id)NameColor;
+ (id)ValueColor;
+ (id)DividerColor;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)flexibleHeightContainerView;
- (id)newNameLabelForName:(id)name;
- (id)newValueLabelForValue:(id)value;
- (id)newSeparatorLine;
- (void)hideWatchRateTooltip;
- (id)colorForLabelIndex:(unsigned long long)index;
- (long long)displayStyleForLabelIndex:(unsigned long long)index;
- (void)setStatNames:(id)names values:(id)values;
- (void)updateNames:(id)names;
- (void)updateValues:(id)values;
- (void)setNameLabelsTextColors:(id)colors;
- (void)setLabelDisplayStyles:(id)styles;
- (void)setLabelFontsAndColors;
- (void)setVisibilityState;
- (void)showOrHideGradient;
- (void)setTimeWatchedPerMinuteTooltipText:(id)text;
- (void)setTimeWatchedPerMinuteLabelIndex:(int)index;

@end

#endif /* PTVBroadcastStatsTableViewCell_h */
