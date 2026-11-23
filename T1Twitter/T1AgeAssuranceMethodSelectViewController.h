//
#ifndef T1AgeAssuranceMethodSelectViewController_h
#define T1AgeAssuranceMethodSelectViewController_h
@import Foundation;

@class _$s13XDesignSystem30StackTrayContentViewControllerCN;

@interface T1AgeAssuranceMethodSelectViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *$__lazy_storage_$_explainerLabel;
    NSNumber"16@0:8 *photoPrivacyList;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *ageVerificationCompletion;
    NSNumber"16@0:8 *availableVerificationOptions;
    NSNumber"16@0:8 *minimumAge;
    NSNumber"16@0:8 *countryCode;
}

/* class methods */
+ (id)allVerificationOptions;
+ (_Bool)isAvailableForInterstitialType:(id)type availableVerificationOptions:(id)options;
+ (id)trayWithAccount:(id)account countryCode:(id)code minimumAge:(id)age availableVerificationOptions:(id)options ageVerificationCompletion:(id /* block */)completion;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1AgeAssuranceMethodSelectViewController_h */
