//
#ifndef TTSTypeaheadRecentSearchTableRowAdapter_h
#define TTSTypeaheadRecentSearchTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface TTSTypeaheadRecentSearchTableRowAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TTSTypeaheadRecentSearchTableRowAdapter_h */
