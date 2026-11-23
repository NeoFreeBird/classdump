//
#ifndef TFNItemsCollectionItemAdapter_h
#define TFNItemsCollectionItemAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNItemsCollectionItemAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNItemsCollectionItemAdapter_h */
