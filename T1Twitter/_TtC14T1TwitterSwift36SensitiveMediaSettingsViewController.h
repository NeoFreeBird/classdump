//
#ifndef _TtC14T1TwitterSwift36SensitiveMediaSettingsViewController_h
#define _TtC14T1TwitterSwift36SensitiveMediaSettingsViewController_h
@import Foundation;

@class T1TwitterSwift.SensitiveMediaSettingsViewModel, TFNItemsDataViewController;

@interface T1TwitterSwift.SensitiveMediaSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    T1TwitterSwift.SensitiveMediaSettingsViewModel viewModel;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift36SensitiveMediaSettingsViewController_h */
