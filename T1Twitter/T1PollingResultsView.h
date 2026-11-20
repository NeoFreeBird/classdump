//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PollingResultsView_h
#define T1PollingResultsView_h
@import Foundation;

#include "T1PollingCardViewTheme.h"

@class NSString, TFNSolidColorView, UIImageView, UILabel, UIView;

@interface T1PollingResultsView : UIView

@property (retain, nonatomic) UILabel *choiceLabel;
@property (retain, nonatomic) UILabel *percentageLabel;
@property (retain, nonatomic) UIImageView *checkmark;
@property (retain, nonatomic) UIView *colorBarContainer;
@property (retain, nonatomic) TFNSolidColorView *colorBar;
@property (nonatomic) _Bool isAnimating;
@property (retain, nonatomic) T1PollingCardViewTheme *theme;
@property (retain, nonatomic) NSString *choice;
@property (nonatomic) double percentage;
@property (retain, nonatomic) NSString *percentageString;
@property (nonatomic) long long choiceIndexedFromOne;
@property (nonatomic) _Bool hasVoted;
@property (nonatomic) _Bool isChecked;
@property (nonatomic) _Bool isWinner;
@property (nonatomic) _Bool resultsAreFinal;
@property (nonatomic) _Bool showPlaceholderPill;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame theme:(id)theme;
- (void)setGraphVisible:(_Bool)visible animated:(_Bool)animated;
- (void)_updateCornerRadius;
- (void)layoutSubviews;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end

#endif /* T1PollingResultsView_h */
