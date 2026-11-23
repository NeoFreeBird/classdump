//
#ifndef T1StatusEditedOnXLabelAdapter_h
#define T1StatusEditedOnXLabelAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StatusEditedOnXLabelAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)accessibilityPerformTapActionInView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StatusEditedOnXLabelAdapter_h */
