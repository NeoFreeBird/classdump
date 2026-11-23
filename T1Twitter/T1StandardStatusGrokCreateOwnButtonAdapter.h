//
#ifndef T1StandardStatusGrokCreateOwnButtonAdapter_h
#define T1StandardStatusGrokCreateOwnButtonAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusGrokCreateOwnButtonAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *displaySurface;
}

/* instance methods */
- (id)initWithDisplaySurface:(long long)surface viewIdentifier:(long long)identifier;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusGrokCreateOwnButtonAdapter_h */
