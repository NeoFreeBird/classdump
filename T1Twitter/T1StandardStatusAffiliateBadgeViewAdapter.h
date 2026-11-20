//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusAffiliateBadgeViewAdapter_h
#define T1StandardStatusAffiliateBadgeViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusAffiliateBadgeViewAdapter : TFNComposableViewAdapter

@property (retain, nonatomic) id statusAffiliateBadgeViewLayoutState;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)_t1_initializeAffiliateBadgeView;
- (void)setViewModel:(id)model forView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_handleEventType:(id)type sender:(id)sender;

@end

#endif /* T1StandardStatusAffiliateBadgeViewAdapter_h */
