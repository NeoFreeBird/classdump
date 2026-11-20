//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSFStandardStatusSuperFollowPostBadgeViewAdapter_h
#define TSFStandardStatusSuperFollowPostBadgeViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface TSFStandardStatusSuperFollowPostBadgeViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *displayType;
}

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier displayType:(long long)type;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* TSFStandardStatusSuperFollowPostBadgeViewAdapter_h */
