//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSettingsIconNavigationItemAdapter_h
#define TFNSettingsIconNavigationItemAdapter_h
@import Foundation;

#include "TFNItemsTableRowAdapter.h"

@interface TFNSettingsIconNavigationItemAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNSettingsIconNavigationItemAdapter_h */
