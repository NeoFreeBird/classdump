//
#ifndef T1StandardStatusGrokAutoTranslateAnnotationViewAdapter_h
#define T1StandardStatusGrokAutoTranslateAnnotationViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusGrokAutoTranslateAnnotationViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *impressionScribedStatusIDs;
}

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (id)initializeView;
- (void)layoutWithLayoutState:(id)state;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusGrokAutoTranslateAnnotationViewAdapter_h */
