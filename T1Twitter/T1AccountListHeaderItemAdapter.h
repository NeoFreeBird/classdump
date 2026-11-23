//
#ifndef T1AccountListHeaderItemAdapter_h
#define T1AccountListHeaderItemAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface T1AccountListHeaderItemAdapter : TFNItemsTableRowAdapter

/* class methods */
+ (Class)cellClass;

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* T1AccountListHeaderItemAdapter_h */
