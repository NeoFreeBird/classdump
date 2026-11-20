//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomEditScheduledDetailsViewController_h
#define T1VoiceRoomEditScheduledDetailsViewController_h
@import Foundation;

#include "T1VoiceRoomSelectUsersViewControllerDelegate-Protocol.h"
#include "T1VoiceRoomTutorialViewControllerDelegate-Protocol.h"
#include "TASSpacesTrayContent-Protocol.h"
#include "TASToggleViewDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"

@class NSString, TFNViewController;

@interface T1VoiceRoomEditScheduledDetailsViewController : TFNViewController <TASSpacesTrayContent, T1VoiceRoomTutorialViewControllerDelegate, TASToggleViewDelegate, TFNModalSheetViewControllerLayoutDelegate, T1VoiceRoomSelectUsersViewControllerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *onCancelConfirmed;
    NSNumber"16@0:8 *textDefaultColor;
    NSNumber"16@0:8 *textHighlightColor;
    NSNumber"16@0:8 *$__lazy_storage_$_titleEditView;
    NSNumber"16@0:8 *$__lazy_storage_$_titleStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_timeLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_schedulePicker;
    NSNumber"16@0:8 *$__lazy_storage_$_timeStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_replayView;
    NSNumber"16@0:8 *$__lazy_storage_$_noIncognitoView;
    NSNumber"16@0:8 *$__lazy_storage_$_hasVideoView;
    NSNumber"16@0:8 *selectedTopicIDs;
    NSNumber"16@0:8 *$__lazy_storage_$_speakersTextView;
    NSNumber"16@0:8 *$__lazy_storage_$_speakersStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_detailsLabel;
    NSNumber"16@0:8 *isSaveEnabled;
    NSNumber"16@0:8 *$__lazy_storage_$_containerStackView;
    NSNumber"16@0:8 *editState;
}

@property (nonatomic, readonly) NSString *spacesTrayPrimaryActionTitle;
@property (nonatomic, readonly) _Bool spacesTrayPrimaryActionEnabled;
@property (nonatomic, readonly) NSString *spacesTraySecondaryActionTitle;
@property (nonatomic, readonly) _Bool spacesTraySecondaryActionIsDestructive;

/* instance methods */
- (void)spacesTrayDidPressPrimaryAction;
- (void)spacesTrayDidPressSecondaryAction;
- (void)tutorialViewControllerDidTapDismissButton:(id)button;
- (void)toggleView:(id)view didTapInfoButton:(id)button;
- (void)toggleView:(id)view didToggleSwitch:(id)_switch;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)voiceRoomSelectUsersViewController:(id)controller didSelectUsers:(id)users;
- (_Bool)voiceRoomSelectUsersViewController:(id)controller canSelectUser:(id)user;
- (unsigned long long)voiceRoomSelectUsersViewControllerOpenSpots:(id)spots;
- (id)initWithViewModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)didTapSave;
- (void)didTapCancel;
- (void)didTapTime;
- (void)didTapSpeakers;
- (void)onViewTap;
- (void)pickerValueChanged:(id)changed;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomEditScheduledDetailsViewController_h */
