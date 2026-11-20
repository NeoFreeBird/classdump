//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSFSubscribersOnlyReplyBadgeViewAdapter_h
#define TSFSubscribersOnlyReplyBadgeViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface TSFSubscribersOnlyReplyBadgeViewAdapter : TFNComposableViewAdapter // (Swift)

/* instance methods */
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* TSFSubscribersOnlyReplyBadgeViewAdapter_h */
