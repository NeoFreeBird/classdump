//
#ifndef CreatorServiceMainViewHeaderItemAdapter_h
#define CreatorServiceMainViewHeaderItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface CreatorServiceMainViewHeaderItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* CreatorServiceMainViewHeaderItemAdapter_h */
