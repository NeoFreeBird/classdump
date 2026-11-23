//
#ifndef T1StandardStatusGapDividerViewAdapter_h
#define T1StandardStatusGapDividerViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusGapDividerViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setLayoutState:(id)state forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusGapDividerViewAdapter_h */
