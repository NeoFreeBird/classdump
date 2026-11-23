//
#ifndef T1RepliesSettingsViewController_h
#define T1RepliesSettingsViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1RepliesSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *$__lazy_storage_$_toxicReplyFilterSwitch;
    NSNumber"16@0:8 *$__lazy_storage_$_toxicReplySetter;
}

/* instance methods */
- (void)update:(_Bool)update;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1RepliesSettingsViewController_h */
