//
#ifndef TFNSettingsNavigationItemAdapter_h
#define TFNSettingsNavigationItemAdapter_h
@import Foundation;

#include "TFNItemsTableRowAdapter.h"

@interface TFNSettingsNavigationItemAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNSettingsNavigationItemAdapter_h */
