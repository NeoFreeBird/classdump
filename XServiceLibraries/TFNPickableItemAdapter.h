//
#ifndef TFNPickableItemAdapter_h
#define TFNPickableItemAdapter_h
@import Foundation;

#include "TFNItemsTableRowAdapter.h"

@interface TFNPickableItemAdapter : TFNItemsTableRowAdapter

/* class methods */
+ (Class)cellClass;

/* instance methods */
- (void)updateAppearanceForCell:(id)cell item:(id)item canPickMultipleValues:(_Bool)values;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNPickableItemAdapter_h */
