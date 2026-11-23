//
#ifndef _TtC16XActivityHistory35RecencySectionHeaderTableRowAdapter_h
#define _TtC16XActivityHistory35RecencySectionHeaderTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface XActivityHistory.RecencySectionHeaderTableRowAdapter : TFNItemsTableRowAdapter // (Swift)

/* instance methods */
- (id)init;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* _TtC16XActivityHistory35RecencySectionHeaderTableRowAdapter_h */
