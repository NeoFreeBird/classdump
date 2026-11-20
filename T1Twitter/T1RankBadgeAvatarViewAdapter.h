//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1RankBadgeAvatarViewAdapter_h
#define T1RankBadgeAvatarViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1RankBadgeAvatarViewAdapter : TFNComposableViewAdapter

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)accessibilityPerformTapActionInView:(id)view;
- (double)_t1_badgeOverlapForView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_updateAvatarView:(id)view forViewModel:(id)model;
- (void)_t1_tapAction:(id)action;
- (void)_t1_longPressAction:(id)action;
- (id)_t1_previewingAction:(id)action;
- (id)_t1_handleEventWithType:(id)type;

@end

#endif /* T1RankBadgeAvatarViewAdapter_h */
