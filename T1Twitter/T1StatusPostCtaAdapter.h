//
#ifndef T1StatusPostCtaAdapter_h
#define T1StatusPostCtaAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StatusPostCtaAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *impressionScribedIds;
    NSNumber"16@0:8 *displaySurface;
}

@property (nonatomic, copy) id /* block */ displaySurfaceOverride;

/* instance methods */
- (id)initWithDisplaySurface:(long long)surface viewIdentifier:(long long)identifier;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StatusPostCtaAdapter_h */
