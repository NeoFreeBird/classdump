//
#ifndef _TtC14T1TwitterSwiftP33_E07F136611AA23A14473B5AD378C95DB33AccountSettingsChangePasswordForm_h
#define _TtC14T1TwitterSwiftP33_E07F136611AA23A14473B5AD378C95DB33AccountSettingsChangePasswordForm_h
@import Foundation;

@class NSArray, TFNLegacyForm;

@interface T1TwitterSwift.(AccountSettingsChangePasswordForm in _E07F136611AA23A14473B5AD378C95DB) : TFNLegacyForm { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *currentPasswordField;
    NSNumber"16@0:8 *newPasswordField;
    NSNumber"16@0:8 *confirmPasswordField;
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *scribePage;
    NSNumber"16@0:8 *scribeSection;
    NSNumber"16@0:8 *viewController;
    NSNumber"16@0:8 *$__lazy_storage_$_forgotPasswordItem;
}

@property (nonatomic, readonly) _Bool submittable;
@property (nonatomic, readonly) NSArray *sections;

/* instance methods */
- (id)init;
- (_Bool)isSubmittable;

@end

#endif /* _TtC14T1TwitterSwiftP33_E07F136611AA23A14473B5AD378C95DB33AccountSettingsChangePasswordForm_h */
