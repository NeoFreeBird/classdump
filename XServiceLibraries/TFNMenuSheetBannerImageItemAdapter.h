//
#ifndef TFNMenuSheetBannerImageItemAdapter_h
#define TFNMenuSheetBannerImageItemAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNMenuSheetBannerImageItemAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNMenuSheetBannerImageItemAdapter_h */
