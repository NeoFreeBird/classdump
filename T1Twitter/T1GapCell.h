//
#ifndef T1GapCell_h
#define T1GapCell_h
@import Foundation;

@class TFNLinkTextLabel, TFNTableViewCell, UIActivityIndicatorView;

@interface T1GapCell : TFNTableViewCell {
    /* instance variables */
    UIActivityIndicatorView *_activityIndicator;
    TFNLinkTextLabel *_label;
}

@property (nonatomic) _Bool loading;

/* class methods */
+ (double)heightForText:(id)text layoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)textLabel;
- (void)layoutSubviews;
- (id)accessibilityLabel;

@end

#endif /* T1GapCell_h */
