//
#ifndef T1TextSizeSliderItemDataViewAdapter_h
#define T1TextSizeSliderItemDataViewAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1TextSizeSliderItemDataViewAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* T1TextSizeSliderItemDataViewAdapter_h */
