//
#ifndef T1RepliesSettingsViewModel_h
#define T1RepliesSettingsViewModel_h
@import Foundation;

@class NSObject, TFNTwitterAccount;

@interface T1RepliesSettingsViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *isLoading;
    NSNumber"16@0:8 *queue;
    NSNumber"16@0:8 *$__lazy_storage_$_toxicReplyUpdater;
    NSNumber"16@0:8 *navigationTitleText;
    NSNumber"16@0:8 *headerDescriptionText;
    NSNumber"16@0:8 *toxicReplyFilterSettingText;
    NSNumber"16@0:8 *toxicReplyFilterHeaderText;
    NSNumber"16@0:8 *toxicReplyFilterExplanationText;
    NSNumber"16@0:8 *toxicReplyFilterResponseErrorString;
    NSNumber"16@0:8 *confirmationDialogViewModel;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* instance methods */
- (id)init;

@end

#endif /* T1RepliesSettingsViewModel_h */
