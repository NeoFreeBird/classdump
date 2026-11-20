//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomSelectUsersViewController_h
#define T1VoiceRoomSelectUsersViewController_h
@import Foundation;

#include "T1VoiceRoomSelectUsersViewControllerDelegate-Protocol.h"
#include "TASSpacesTrayContent-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TTSUserSelectionViewControllerDelegate-Protocol.h"

@class NSString, TFNButton, TFNGradientView, TFNTwitterAccount, TFNViewController, TTSUserSelectionViewController, UIBarButtonItem, UILabel;

@interface T1VoiceRoomSelectUsersViewController : TFNViewController <TASSpacesTrayContent, TFNModalSheetViewControllerLayoutDelegate, TTSUserSelectionViewControllerDelegate>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TTSUserSelectionViewController *userSelectionViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *conversationTypeTitleLabel;
@property (retain, nonatomic) UILabel *conversationTypeSubtitleLabel;
@property (retain, nonatomic) TFNButton *backButton;
@property (retain, nonatomic) UIBarButtonItem *closeBarButtonItem;
@property (retain, nonatomic) TFNGradientView *backgroundGradientView;
@property (retain, nonatomic) TFNGradientView *bottomGradientView;
@property (copy, nonatomic) NSString *validateTitle;
@property (nonatomic) _Bool hasSelectedUsers;
@property (weak, nonatomic) id <T1VoiceRoomSelectUsersViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSString *spacesTrayPrimaryActionTitle;
@property (readonly, nonatomic) _Bool spacesTrayPrimaryActionEnabled;
@property (readonly, nonatomic) _Bool spacesTrayPrimaryActionIsDestructive;
@property (readonly, copy, nonatomic) NSString *spacesTraySecondaryActionTitle;
@property (readonly, nonatomic) _Bool spacesTraySecondaryActionIsDestructive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account mode:(long long)mode selectedUsers:(id)users defaultUsers:(id)users;
- (void)loadView;
- (void)viewDidLoad;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)_t1_tappedCloseButton:(id)button;
- (void)_t1_tappedDoneButton:(id)button;
- (void)spacesTrayDidPressPrimaryAction;
- (void)userSelectionViewControllerDidChangeUserSelection:(id)selection;
- (_Bool)userSelectionViewController:(id)controller canSelectUser:(id)user;
- (id)userSelectionViewController:(id)controller nonSelectableReasonForUser:(id)user;
- (id)scribePage;
- (id)scribeSection;
- (void)_t1_logClickActionOnElement:(id)element inComponent:(id)component;

@end

#endif /* T1VoiceRoomSelectUsersViewController_h */
