//
#ifndef T1StandardStatusSpacesInfoAdapter_h
#define T1StandardStatusSpacesInfoAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusSpacesInfoAdapter : TFNComposableViewAdapter

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* T1StandardStatusSpacesInfoAdapter_h */
