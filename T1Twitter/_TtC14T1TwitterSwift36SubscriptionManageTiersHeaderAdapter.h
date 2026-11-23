//
#ifndef _TtC14T1TwitterSwift36SubscriptionManageTiersHeaderAdapter_h
#define _TtC14T1TwitterSwift36SubscriptionManageTiersHeaderAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1TwitterSwift.SubscriptionManageTiersHeaderAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift36SubscriptionManageTiersHeaderAdapter_h */
