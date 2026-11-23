//
#ifndef ONBActionListItemTableRowAdapter_h
#define ONBActionListItemTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface ONBActionListItemTableRowAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* ONBActionListItemTableRowAdapter_h */
