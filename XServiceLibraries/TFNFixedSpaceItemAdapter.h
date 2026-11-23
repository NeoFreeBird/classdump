//
#ifndef TFNFixedSpaceItemAdapter_h
#define TFNFixedSpaceItemAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNFixedSpaceItemAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNFixedSpaceItemAdapter_h */
