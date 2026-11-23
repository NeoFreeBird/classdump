//
#ifndef T1MentionSettingsViewController_h
#define T1MentionSettingsViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1MentionSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *$__lazy_storage_$_mentionSettingsSwitch;
    NSNumber"16@0:8 *$__lazy_storage_$_globalMentionsSetter;
    NSNumber"16@0:8 *$__lazy_storage_$_allMentionsSettingSwitch;
    NSNumber"16@0:8 *$__lazy_storage_$_followingMentionSettingSwitch;
    NSNumber"16@0:8 *$__lazy_storage_$_allMentionsSettingSetter;
    NSNumber"16@0:8 *$__lazy_storage_$_followingMentionsSettingSetter;
}

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1MentionSettingsViewController_h */
