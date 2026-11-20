//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CommunityAnalysisViewAdapter_h
#define T1CommunityAnalysisViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1CommunityAnalysisViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *featureSwitchKey;
}

/* instance methods */
- (void)useHomeTimelineFeatureSwitch;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)accessibilityLabelInView:(id)view;
- (void)accessibilityPerformTapActionInView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1CommunityAnalysisViewAdapter_h */
