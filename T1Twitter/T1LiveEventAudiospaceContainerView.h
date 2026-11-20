//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventAudiospaceContainerView_h
#define T1LiveEventAudiospaceContainerView_h
@import Foundation;

#include "T1LiveEventAudiospaceContainerViewDelegate-Protocol.h"
#include "T1LiveEventAudiospaceContainerViewModel.h"
#include "T1LiveEventRoundedPaddedView.h"
#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"

@class NSString, TFNButton, TUIAvatarImageView, UILabel, UIStackView, UITapGestureRecognizer, UIView;

@interface T1LiveEventAudiospaceContainerView : UIView <TASSpaceModelObserver>

@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) TUIAvatarImageView *avatarImageView;
@property (readonly, nonatomic) UIView *dimmingView;
@property (readonly, nonatomic) UIStackView *titleButtonStackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) TFNButton *actionButton;
@property (readonly, nonatomic) UIStackView *badgesStackView;
@property (readonly, nonatomic) T1LiveEventRoundedPaddedView *contentTypeBadge;
@property (readonly, nonatomic) T1LiveEventRoundedPaddedView *listenersBadge;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) T1LiveEventAudiospaceContainerViewModel *viewModel;
@property (weak, nonatomic) id <T1LiveEventAudiospaceContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)_t1_audiospaceStartedAtString:(id)string;
- (void)_t1_updateActionButtonSelected;
- (void)_t1_didTapActionButton;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)spaceModel:(id)model didSubscribeScheduledSpaceWithSpaceID:(id)id sender:(id)sender automaticToast:(_Bool)toast;
- (void)spaceModel:(id)model didUnsubscribeScheduledSpaceWithSpaceID:(id)id sender:(id)sender;

@end

#endif /* T1LiveEventAudiospaceContainerView_h */
