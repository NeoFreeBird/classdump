//
#ifndef _TtP12TwitterLists39CreateAndEditListViewControllerDelegate__Protocol_h
#define _TtP12TwitterLists39CreateAndEditListViewControllerDelegate__Protocol_h
@import Foundation;

@protocol TwitterLists.CreateAndEditListViewControllerDelegate

@required

/* required instance methods */
- (void)createAndEditListViewController:(id)controller didCreateListID:(long long)id;
- (void)createAndEditListViewController:(id)controller didUpdateListMembership:(long long)membership;
- (void)createAndEditListViewControllerDidDeleteList:(id)list;

@optional

@end

#endif /* _TtP12TwitterLists39CreateAndEditListViewControllerDelegate__Protocol_h */
