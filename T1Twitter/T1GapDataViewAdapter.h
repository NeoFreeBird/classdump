//
#ifndef T1GapDataViewAdapter_h
#define T1GapDataViewAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1GapDataViewAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)_showMoreTextForItem:(id)item withDelegate:(id)delegate;
- (_Bool)_loadingStatusForItem:(id)item withDelegate:(id)delegate;

@end

#endif /* T1GapDataViewAdapter_h */
