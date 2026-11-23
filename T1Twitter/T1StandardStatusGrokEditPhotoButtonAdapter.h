//
#ifndef T1StandardStatusGrokEditPhotoButtonAdapter_h
#define T1StandardStatusGrokEditPhotoButtonAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusGrokEditPhotoButtonAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *renderedDownloadCTA;
    NSNumber"16@0:8 *displaySurface;
}

/* instance methods */
- (id)initWithDisplaySurface:(long long)surface viewIdentifier:(long long)identifier;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setLayoutState:(id)state forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusGrokEditPhotoButtonAdapter_h */
