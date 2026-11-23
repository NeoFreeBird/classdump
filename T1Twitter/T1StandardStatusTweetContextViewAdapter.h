//
#ifndef T1StandardStatusTweetContextViewAdapter_h
#define T1StandardStatusTweetContextViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusTweetContextViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (id)initializeView;
- (void)setLayoutState:(id)state forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusTweetContextViewAdapter_h */
