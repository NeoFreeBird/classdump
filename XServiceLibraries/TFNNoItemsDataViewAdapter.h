//
#ifndef TFNNoItemsDataViewAdapter_h
#define TFNNoItemsDataViewAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNNoItemsDataViewAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNNoItemsDataViewAdapter_h */
