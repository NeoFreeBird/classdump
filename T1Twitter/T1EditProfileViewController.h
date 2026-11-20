//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1EditProfileViewController_h
#define T1EditProfileViewController_h
@import Foundation;

#include "T1EditProfileBlurrableBannerImageView.h"
#include "T1EditProfileForm.h"
#include "T1EditProfileFormDelegate-Protocol.h"
#include "T1EditProfileViewControllerDelegate-Protocol.h"
#include "T1PhotoSelection.h"
#include "T1PickAndFilterPhotoFlowController.h"
#include "T1PickAndFilterPhotoFlowControllerDelegate-Protocol.h"
#include "T1ProfessionalModuleObserver-Protocol.h"
#include "T1TweetTakeoverPromptViewControllerDelegate-Protocol.h"
#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "UIDropInteractionDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSString, TFNAvatarHeaderView, TFNButton, TFNLegacyFormViewController, TFNTwitterAccount, UIBarButtonItem, UIImageView, UIScrollView, UIView, XDSBlur, XNAVConfiguration;

@interface T1EditProfileViewController : TFNLegacyFormViewController <XNAVConfigurationProviding, T1EditProfileFormDelegate, T1PickAndFilterPhotoFlowControllerDelegate, T1ProfessionalModuleObserver, T1TweetTakeoverPromptViewControllerDelegate, TFNLayoutMetricsEnvironment, UIDropInteractionDelegate, TFNJumpBackToHomeTimelineBehavior> {
    /* instance variables */
    _Bool _didShowAddBirthdayWarning;
    _Bool _userAddedAvatar;
    _Bool _userAddedBanner;
    _Bool _userRemovedBanner;
    _Bool _clearNavigationBarMode;
    double _bannerHeight;
    UIBarButtonItem *_doneBarButtonItem;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardViewFrame;
    _Bool _keyboardViewShowing;
    UIView *_bannerContainerView;
    UIView *_darkenView;
    long long _keyboardAnimationCurve;
    double _keyboardAnimationDuration;
    TFNButton *_grokImaginePromptButton;
}

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) unsigned long long blueCheckmarkCalloutType;
@property (readonly, nonatomic) T1EditProfileForm *profileForm;
@property (retain, nonatomic) T1EditProfileBlurrableBannerImageView *bannerView;
@property (retain, nonatomic) XDSBlur *bannerBlur;
@property (retain, nonatomic) UIImageView *cameraIcon;
@property (retain, nonatomic) TFNAvatarHeaderView *avatarHeaderView;
@property (nonatomic) long long selectedField;
@property (retain, nonatomic) T1PhotoSelection *selectedAvatarPhoto;
@property (retain, nonatomic) T1PhotoSelection *selectedBannerPhoto;
@property (retain, nonatomic) T1PickAndFilterPhotoFlowController *photoPicker;
@property (weak, nonatomic) id <T1EditProfileViewControllerDelegate, T1ProfessionalModuleObserver> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithAccount:(id)account selectedField:(long long)field;
- (id)initWithForm:(id)form appearance:(id)appearance;
- (void)dealloc;
- (unsigned long long)_t1_blueCheckmarkCalloutTypeWithAccount:(id)account;
- (_Bool)addsDoneBarButtonButtonItemToNavigationBar;
- (_Bool)shouldShowCloseButton;
- (double)headerHeightForScrollView:(id)view minimumHeight:(double)height;
- (id)doneBarButtonItem;
- (unsigned long long)inputRequiredBehavior;
- (void)_t1_selectPhotoOfTypeWithPhotoGallery:(long long)gallery fromView:(id)view;
- (void)setPhoto:(id)photo ofType:(long long)type;
- (void)_removeBanner;
- (void)save;
- (void)proceedAfterSaving;
- (void)_closeAction;
- (void)_didTapAvatar:(id)avatar;
- (void)_didTapBanner:(id)banner;
- (void)_didTapGrokImaginePromptButton;
- (void)_uploadAvatar:(id)avatar;
- (void)_requestUserRefreshForced;
- (void)_uploadBanner:(id)banner;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)loadBlueProfileEditWarningMessageConfig;
- (void)_didSelectField:(id)field;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)viewWillLayoutSubviews;
- (void)_setupBannerAppearance;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)_updateNavigationBarStyle:(_Bool)style;
- (void)scrollViewDidScroll:(id)scroll;
- (void)_t1_setBannerBlurPercent:(double)percent;
- (void)pickAndFilterPhotoFlowController:(id)controller userDidSelectPhoto:(id)photo type:(long long)type;
- (void)pickAndFilterPhotoFlowController:(id)controller userDidCancelPhotoType:(long long)type;
- (void)pickAndFilterPhotoFlowController:(id)controller removePhotoType:(long long)type;
- (void)_t1_userDataSourceDidUpdate:(id)update;
- (void)profileModulesDidChange;
- (void)dropInteraction:(id)interaction performDrop:(id)drop;
- (id)dropInteraction:(id)interaction sessionDidUpdate:(id)update;
- (_Bool)dropInteraction:(id)interaction canHandleSession:(id)session;
- (void)_t1_dropImage:(id)image ofType:(long long)type;
- (void)tweetTakeoverPromptViewController:(id)controller didSelectEditTweetWithComposition:(id)composition;
- (void)tweetTakeoverPromptViewController:(id)controller didSelectSendTweetWithComposition:(id)composition;
- (void)editProfileFormDidTapBlueCheckmarkHintLearnMore:(id)more;
- (void)editProfileFormDidTapAccountAuthenticityLearnMore:(id)more;
- (void)editProfileFormDidChangeRows:(id)rows;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)submitForm;
- (void)_t1_confirmUploadAvatarAndBannerThenUpdateProfileForBlueCheckmark;
- (void)_t1_showErrorForEditProfileDeniedForBlueSubscriberUnderReview;
- (void)_t1_uploadAvatarAndBannerThenUpdateProfile;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })additionalGutterFrame;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)scribeAction:(id)action inComponent:(id)component forPhotoType:(long long)type parameters:(id)parameters;
- (void)_t1_scribeFinish;

@end

#endif /* T1EditProfileViewController_h */
