//
#ifndef T1StandardStatusSeparatorViewAdapter_h
#define T1StandardStatusSeparatorViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusSeparatorViewAdapter : TFNComposableViewAdapter

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* T1StandardStatusSeparatorViewAdapter_h */
