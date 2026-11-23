//
#ifndef T1SettingsPreferenceItemTableRowAdapter_h
#define T1SettingsPreferenceItemTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface T1SettingsPreferenceItemTableRowAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)presentPreferencePickerFromViewController:(id)controller forItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* T1SettingsPreferenceItemTableRowAdapter_h */
