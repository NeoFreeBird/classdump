//
#ifndef T1AddLocationPlaceRowAdapter_h
#define T1AddLocationPlaceRowAdapter_h
@import Foundation;

@class TFNStringDataViewAdapter;

@interface T1AddLocationPlaceRowAdapter : TFNStringDataViewAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* T1AddLocationPlaceRowAdapter_h */
