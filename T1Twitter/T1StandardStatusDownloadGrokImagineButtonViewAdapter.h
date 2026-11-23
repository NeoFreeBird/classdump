//
#ifndef T1StandardStatusDownloadGrokImagineButtonViewAdapter_h
#define T1StandardStatusDownloadGrokImagineButtonViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusDownloadGrokImagineButtonViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *isFocal;
}

/* instance methods */
- (id)initWithIsFocal:(_Bool)focal viewIdentifier:(long long)identifier;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)handleTap:(id)tap;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusDownloadGrokImagineButtonViewAdapter_h */
