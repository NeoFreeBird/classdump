//
#ifndef T1VoiceRoomCreateViewController_h
#define T1VoiceRoomCreateViewController_h
@import Foundation;

#include "T1VoiceRoomSelectUsersViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomTutorialViewControllerDelegate-Protocol.h"
#include "TASAudienceTypeConfigurationViewDelegate-Protocol.h"
#include "TASCommunitySpaceBadgeDelegate-Protocol.h"
#include "TASCreateTitleEditViewDelegate-Protocol.h"
#include "TASSpacesContext-Protocol.h"
#include "TASToggleViewDelegate-Protocol.h"
#include "TASTooltipperDelegate-Protocol.h"
#include "TASVoiceAccountPerspective-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, TASAudienceTypeConfigurationView, TASCommunitySpaceBadge, TASCreateTitleEditView, TASScheduledSpaceData, TASSettings, TASSpaceButton, TASSpaceCreationCommunityModel, TASToggleView, TASTooltipper, TFNButton, TFNViewController, UIScrollView, UIStackView, UIView;

@interface T1VoiceRoomCreateViewController : TFNViewController <T1VoiceRoomTutorialViewControllerDelegate, T1VoiceRoomSelectUsersViewControllerDelegate, TASAudienceTypeConfigurationViewDelegate, TASCreateTitleEditViewDelegate, TASToggleViewDelegate, TASTooltipperDelegate, TASCommunitySpaceBadgeDelegate, UIScrollViewDelegate, TFNModalSheetViewControllerLayoutDelegate>

@property (retain, nonatomic) id <TASSpacesContext> context;
@property (retain, nonatomic) id <TASVoiceAccountPerspective> account;
@property (retain, nonatomic) TASSettings *settings;
@property (copy, nonatomic) NSArray *selectedTopicIDs;
@property (copy, nonatomic) NSArray *scheduledSpaces;
@property (readonly, nonatomic) TASScheduledSpaceData *nextScheduledSpace;
@property (retain, nonatomic) TASTooltipper *tooltipper;
@property (nonatomic) _Bool lockdownEnabledForAccount;
@property (nonatomic) _Bool employeeOnlyEnabledForAccount;
@property (nonatomic) _Bool superFollowersOnlyEnabledForAccount;
@property (retain, nonatomic) NSLayoutConstraint *keyboardSafeAreaLayoutGuideBottomAnchorConstraint;
@property (retain, nonatomic) TASAudienceTypeConfigurationView *audienceTypeConfigurationView;
@property (retain, nonatomic) TASCommunitySpaceBadge *communityBadge;
@property (retain, nonatomic) TASCreateTitleEditView *titleTextView;
@property (nonatomic) _Bool skipsNextTitleFocus;
@property (retain, nonatomic) TASSpaceButton *createButton;
@property (retain, nonatomic) TFNButton *scheduleButton;
@property (retain, nonatomic) UIView *footerSideViews;
@property (retain, nonatomic) UIStackView *footerStack;
@property (retain, nonatomic) TFNButton *infoButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) TASToggleView *enableRecordingView;
@property (retain, nonatomic) TASToggleView *enableVideoView;
@property (retain, nonatomic) TASToggleView *enableIncognitoView;
@property (retain, nonatomic) UIStackView *moreOptionsStack;
@property (nonatomic) long long creationContext;
@property (retain, nonatomic) TASSpaceCreationCommunityModel *community;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithContext:(id)context creationContext:(long long)context;
- (id)initWithContext:(id)context scheduledSpaces:(id)spaces creationContext:(long long)context community:(id)community;
- (void)dealloc;
- (void)_t1_updateClippingFromSettings:(id)settings;
- (void)_t1_updateConversationControlsFromSettings:(id)settings;
- (_Bool)allowsSelectingAudience;
- (_Bool)isCreatingFromCommunity;
- (_Bool)allowsRecordingSpace;
- (_Bool)allowsSchedulingSpace;
- (long long)multiScheduledMaxSpaces;
- (_Bool)shouldDisplayMultiScheduledSpaceButton;
- (void)_t1_updateScheduledSpaces;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)viewControllerWillPresentAnimated:(_Bool)animated;
- (void)_t1_presentMicrophoneSetup;
- (_Bool)_t1_presentWelcomeTray;
- (void)_t1_presentTutorialViewControllerWithMode:(long long)mode;
- (void)_t1_presentMultiScheduledSpaceViewController;
- (void)viewWillLayoutSubviews;
- (void)_t1_didTapCreateButton:(id)button;
- (void)_t1_didTapCloseBarButton:(id)button;
- (void)_t1_didTapTutorialButton:(id)button;
- (void)_t1_didTapScheduleButton:(id)button;
- (void)_t1_didTapReplayInfoButton:(id)button;
- (void)_t1_didToggleReplaySwitch:(id)_switch;
- (void)_t1_presentReplayNux;
- (void)_t1_keyboardDidChange:(id)change;
- (void)_t1_updateKeyboardSafeAreaGuide;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)_t1_logClickActionOnElement:(id)element inComponent:(id)component;
- (id)_t1_audioSpaceScribeParameters;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)voiceRoomSelectUsersViewController:(id)controller didSelectUsers:(id)users;
- (_Bool)voiceRoomSelectUsersViewController:(id)controller canSelectUser:(id)user;
- (unsigned long long)voiceRoomSelectUsersViewControllerOpenSpots:(id)spots;
- (void)_t1_create;
- (void)createTitleEditViewDidBeginEditing:(id)editing;
- (void)createTitleEditViewDidChange:(id)change;
- (void)_t1_updateButtons;
- (long long)_t1_contentTypeForVideo;
- (void)audienceTypeConfigurationView:(id)view didTapAudienceButton:(id)button;
- (id)_t1_speakerConfigurationActionItems;
- (void)_t1_presentSelectUsers;
- (void)tutorialViewControllerDidTapDismissButton:(id)button;
- (void)toggleView:(id)view didTapInfoButton:(id)button;
- (void)toggleView:(id)view didToggleSwitch:(id)_switch;
- (_Bool)tooltipper:(id)tooltipper shouldPresentTutorial:(long long)tutorial context:(id)context;
- (void)tooltipper:(id)tooltipper didPresentTutorial:(long long)tutorial context:(id)context;
- (void)onCommunitySpaceBadgeTapWithSpaceBadge:(id)badge;
- (_Bool)communitySpaceNuxShouldShowCreationOption;
- (_Bool)isLockdownEnabledForAccount;
- (_Bool)isEmployeeOnlyEnabledForAccount;
- (_Bool)isSuperFollowersOnlyEnabledForAccount;

@end

#endif /* T1VoiceRoomCreateViewController_h */
