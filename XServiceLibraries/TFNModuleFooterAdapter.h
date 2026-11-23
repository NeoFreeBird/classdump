//
#ifndef TFNModuleFooterAdapter_h
#define TFNModuleFooterAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNModuleFooterAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNModuleFooterAdapter_h */
