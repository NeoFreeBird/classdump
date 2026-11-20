//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusReplySortingViewAdapter_h
#define T1StandardStatusReplySortingViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusReplySortingViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *sortButton;
    NSNumber"16@0:8 *activityButton;
}

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setLayoutState:(id)state forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusReplySortingViewAdapter_h */
