//
#ifndef _TtC14T1TwitterSwift34SubscriptionManageTiersBodyAdapter_h
#define _TtC14T1TwitterSwift34SubscriptionManageTiersBodyAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1TwitterSwift.SubscriptionManageTiersBodyAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34SubscriptionManageTiersBodyAdapter_h */
