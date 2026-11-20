//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusAvatarWithPresenceViewAdapter_h
#define T1StatusAvatarWithPresenceViewAdapter_h
@import Foundation;

@class NSString, TFNComposableViewAdapter, TFSObservable, TUIAccessibilityCustomAction;

@interface T1StatusAvatarWithPresenceViewAdapter : TFNComposableViewAdapter

@property (retain, nonatomic) TFSObservable *userPresenceObservable;
@property (retain, nonatomic) id userPresenceObserver;
@property (copy, nonatomic) NSString *accessibilityUserPresenceLabel;
@property (retain, nonatomic) TUIAccessibilityCustomAction *accessibilityCustomAction;
@property (nonatomic) long long displayContext;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (_Bool)_t1_shouldRequestUserPresenceForViewModel:(id)model;
- (void)_t1_updateAccessibilityWithUserFullName:(id)name presenceInfo:(id)info view:(id)view;
- (void)_t1_updateFocalAccessibilityWithUserFullName:(id)name presenceInfo:(id)info view:(id)view;
- (void)_t1_updateTimelineAccessibilityWithUserFullName:(id)name presenceInfo:(id)info view:(id)view;
- (void)accessibilityPerformTapActionInView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_updateAvatarView:(id)view forViewModel:(id)model;
- (void)_t1_updateLongPressRegistrationForView:(id)view;
- (void)_t1_scribeTapActionForAvatarView:(id)view element:(id)element;
- (void)_t1_tapAction:(id)action;
- (void)_t1_longPressAction:(id)action;
- (id)_t1_previewingAction:(id)action;
- (id)_t1_handleEventWithType:(id)type;

@end

#endif /* T1StatusAvatarWithPresenceViewAdapter_h */
