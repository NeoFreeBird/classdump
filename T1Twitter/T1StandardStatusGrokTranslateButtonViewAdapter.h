//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusGrokTranslateButtonViewAdapter_h
#define T1StandardStatusGrokTranslateButtonViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusGrokTranslateButtonViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *forFocalView;
    NSNumber"16@0:8 *impressionScribedStatusIDs;
}

@property (nonatomic) long long colorTheme;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier forFocalView:(_Bool)view;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)initializeView;
- (void)layoutWithLayoutState:(id)state;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusGrokTranslateButtonViewAdapter_h */
