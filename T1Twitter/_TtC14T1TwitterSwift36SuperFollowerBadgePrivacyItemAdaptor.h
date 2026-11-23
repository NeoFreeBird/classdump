//
#ifndef _TtC14T1TwitterSwift36SuperFollowerBadgePrivacyItemAdaptor_h
#define _TtC14T1TwitterSwift36SuperFollowerBadgePrivacyItemAdaptor_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface T1TwitterSwift.SuperFollowerBadgePrivacyItemAdaptor : TFNItemsTableRowAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift36SuperFollowerBadgePrivacyItemAdaptor_h */
