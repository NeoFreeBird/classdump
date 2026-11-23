//
#ifndef T1SettingsConnectedSSOAccountItemTableRowAdapter_h
#define T1SettingsConnectedSSOAccountItemTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface T1SettingsConnectedSSOAccountItemTableRowAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* T1SettingsConnectedSSOAccountItemTableRowAdapter_h */
