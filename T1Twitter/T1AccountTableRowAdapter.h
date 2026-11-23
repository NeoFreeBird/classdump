//
#ifndef T1AccountTableRowAdapter_h
#define T1AccountTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface T1AccountTableRowAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)_t1_userViewOptionsForAccount:(id)account;

@end

#endif /* T1AccountTableRowAdapter_h */
