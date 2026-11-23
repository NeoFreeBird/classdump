//
#ifndef T1StandardStatusAvatarViewAdapter_h
#define T1StandardStatusAvatarViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusAvatarViewAdapter : TFNComposableViewAdapter

@property (readonly, nonatomic) unsigned long long displayType;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier;
- (id)initWithViewIdentifier:(long long)identifier displayType:(unsigned long long)type;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)accessibilityPerformTapActionInView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_updateAvatarView:(id)view forViewModel:(id)model;
- (void)_t1_tapAction:(id)action;
- (void)_t1_longPressAction:(id)action;
- (id)_t1_previewingAction:(id)action;
- (id)_t1_handleEventWithType:(id)type;

@end

#endif /* T1StandardStatusAvatarViewAdapter_h */
