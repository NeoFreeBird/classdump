//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileUserInfoViewController_h
#define T1ProfileUserInfoViewController_h
@import Foundation;

#include "T1ProfileUserInfoView.h"
#include "T1ProfileUserInfoViewDelegate-Protocol.h"
#include "T1ProfileViewModel-Protocol.h"
#include "T1ProfileWorkExperienceSection.h"
#include "T1ResizableHeaderSubheader-Protocol.h"
#include "UIContextMenuInteractionDelegate-Protocol.h"

@class NSString, TFNTwitterAccount, TFNViewController;

@interface T1ProfileUserInfoViewController : TFNViewController <T1ProfileUserInfoViewDelegate, UIContextMenuInteractionDelegate, T1ResizableHeaderSubheader>

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) T1ProfileUserInfoView *infoView;
@property (readonly, nonatomic) _Bool workExperienceEnabled;
@property (retain, nonatomic) T1ProfileWorkExperienceSection *workExperienceSection;
@property (retain, nonatomic) id <T1ProfileViewModel> viewModel;
@property (copy, nonatomic) id /* block */ birthdayTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id subheaderInfo;
@property (copy, nonatomic) id /* block */ preferredHeightCheckBlock;

/* class methods */
+ (void)_t1_reloadInfoView:(id)view withViewModel:(id)model forAccount:(id)account birthdayTapBlock:(id /* block */)block;
+ (_Bool)shouldDisplayProfessionalCategory:(id)category forAccount:(id)account isViewingOwnProfile:(_Bool)profile;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)reloadData;
- (void)_t1_reloadWorkExperienceSection;
- (_Bool)_t1_canDisplayWorkExperience;
- (void)_t1_workExperienceHeightDidChange;
- (void)viewDidAppear:(_Bool)appear;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (double)preferredHeight;
- (_Bool)wantsPreferredHeightAppliedAsIs;
- (void)profileUserInfoViewDidViewProfessionalCategory:(id)category;
- (void)profileUserInfoViewDidTapProfessionalCategory:(id)category;
- (void)profileUserInfoView:(id)view didTapURL:(id)url;
- (void)profileUserInfoView:(id)view didLongPressURL:(id)url inView:(id)view;
- (void)profileUserInfoViewDidTapBirthday:(id)birthday;
- (void)profileUserInfoViewDidTapCreatedDate:(id)date;
- (void)profileUserInfoView:(id)view didTapContributorLearnMore:(id)more;
- (void)profileUserInfoView:(id)view didTapBioActiveRange:(id)range;
- (_Bool)profileUserInfoView:(id)view shouldRecognizeLongPressOnBioActiveRange:(id)range;
- (void)profileUserInfoView:(id)view didLongPressBioActiveRange:(id)range;
- (void)profileUserInfoViewDidToggleBioExpansion:(id)expansion;
- (double)topPaddingAdjustmentForProfileUserInfoView:(id)view;
- (void)profileUserInfoView:(id)view bioTranslationStateDidChange:(unsigned long long)change previousState:(unsigned long long)state;
- (void)profileUserInfoViewDidTapTranslateBio:(id)bio;
- (void)profileUserInfoViewDidTapTranslationInfo:(id)info sender:(id)sender;
- (void)_t1_loadBioTranslation;
- (void)profileUserInfoViewDidTapExpandedBioButton:(id)button;
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)scribeViewImpressionWithParameters:(id)parameters;
- (void)tfn_fontSizeChanged;
- (_Bool)isWorkExperienceEnabled;

@end

#endif /* T1ProfileUserInfoViewController_h */
