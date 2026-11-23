//
#ifndef T1EditProfileForm_h
#define T1EditProfileForm_h
@import Foundation;

#include "T1BlueProfileEditWarningMessageConfig.h"
#include "T1EditProfileFormDelegate-Protocol.h"
#include "T1EditProfileLocationFormField.h"
#include "T1EditProfileWorkFieldAdapter.h"
#include "T1ProfessionalModuleObserver-Protocol.h"
#include "T1ProfileBirthdayPickerViewController.h"
#include "T1ProfileLocationPickerDelegate-Protocol.h"
#include "TFNLegacyFormDelegate-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"
#include "_TtP23TwitterProfileModulesUI42ProfessionalSettingsViewControllerDelegate_-Protocol.h"
#include "_TtP23TwitterProfileModulesUI59ProfessionalSettingsViewControllerCategorySelectionDelegate_-Protocol.h"
#include "_TtP24TwitterOnboardingFeature30TwitterOnboardingFlowAssistant_-Protocol.h"

@class NSNumber, NSString, TFNLegacyForm, TFNLegacyFormCustomItem, TFNLegacyFormField, TFNTwitterAccount, TFSTwitterProfessional, TFSTwitterUserExtendedProfileBirthday;

@interface T1EditProfileForm : TFNLegacyForm <T1ProfileLocationPickerDelegate, TwitterProfileModulesUI.ProfessionalSettingsViewControllerDelegate, TwitterProfileModulesUI.ProfessionalSettingsViewControllerCategorySelectionDelegate, TNLCommunicationAgentObserver>

@property (retain, nonatomic) TFSTwitterProfessional *cachedProfessional;
@property (readonly, nonatomic) unsigned long long blueCheckmarkCalloutType;
@property (retain, nonatomic) TFSTwitterUserExtendedProfileBirthday *birthday;
@property (weak, nonatomic) T1ProfileBirthdayPickerViewController *presentedBirthdayPicker;
@property (nonatomic) _Bool userUpdatedImageField;
@property (retain, nonatomic) id <TwitterOnboardingFeature.TwitterOnboardingFlowAssistant> professionalFlowAssistant;
@property (readonly, nonatomic) _Bool workFieldShown;
@property (retain, nonatomic) NSNumber *workExperienceWriteCountAtStart;
@property (retain, nonatomic) T1EditProfileWorkFieldAdapter *workFieldAdapter;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1EditProfileLocationFormField *locationField;
@property (retain, nonatomic) TFNLegacyFormField *fullNameField;
@property (retain, nonatomic) TFNLegacyFormField *websiteField;
@property (retain, nonatomic) TFNLegacyFormField *bioField;
@property (retain, nonatomic) TFNLegacyFormField *birthdayField;
@property (retain, nonatomic) TFNLegacyFormField *workField;
@property (retain, nonatomic) TFNLegacyFormCustomItem *editProfessionalProfileField;
@property (retain, nonatomic) TFNLegacyFormCustomItem *switchToProfessionalField;
@property (retain, nonatomic) TFNLegacyFormCustomItem *editExpandedBioField;
@property (weak, nonatomic) id <TFNLegacyFormDelegate, T1EditProfileFormDelegate, T1ProfessionalModuleObserver> delegate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSString *website;
@property (readonly, nonatomic) NSString *bio;
@property (readonly, nonatomic) TFSTwitterUserExtendedProfileBirthday *defaultBirthday;
@property (readonly, nonatomic) _Bool birthdayFieldShown;
@property (retain, nonatomic) T1BlueProfileEditWarningMessageConfig *blueMessageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account blueCheckmarkCalloutType:(unsigned long long)type;
- (void)userDidUpdateImageField;
- (_Bool)applyErrors;
- (void)logChanges;
- (_Bool)professionalNeedsReloading;
- (id)_workItem;
- (_Bool)isSubmittable;
- (_Bool)_hasSavedWorkExperience;
- (_Bool)hasChanges;
- (id)sections;
- (void)profileLocationPickerViewControllerDidCancelSelection:(id)selection;
- (void)profileLocationPickerViewController:(id)controller didSelectPlace:(id)place;
- (void)profileLocationPickerViewController:(id)controller didSelectCustomPlaceWithName:(id)name;
- (void)_birthdayPickerDidTapCancel;
- (void)_birthdayPickerDidTapDone;
- (void)_viewerWorkExperiencesDidChange:(id)change;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)_showInWorkFieldWithoutAnimatingRowsUserInput:(id)input hintText:(id)text;
- (void)launchCategorySelectionFrom:(id)from completion:(id /* block */)completion;
- (void)reloadProfileModules;
- (_Bool)isBirthdayFieldShown;

@end

#endif /* T1EditProfileForm_h */
