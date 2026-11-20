//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSettingsDescriptionItemTableRowAdapter_h
#define TFNSettingsDescriptionItemTableRowAdapter_h
@import Foundation;

#include "TFNItemsTableRowAdapter.h"

@interface TFNSettingsDescriptionItemTableRowAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })private_dataViewController:(id)controller cellSizeForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)cellIdentifier;

@end

#endif /* TFNSettingsDescriptionItemTableRowAdapter_h */
