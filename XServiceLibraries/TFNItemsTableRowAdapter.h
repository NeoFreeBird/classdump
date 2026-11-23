//
#ifndef TFNItemsTableRowAdapter_h
#define TFNItemsTableRowAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNItemsTableRowAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNItemsTableRowAdapter_h */
