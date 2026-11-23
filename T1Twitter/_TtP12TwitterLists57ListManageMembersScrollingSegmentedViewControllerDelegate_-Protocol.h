//
#ifndef _TtP12TwitterLists57ListManageMembersScrollingSegmentedViewControllerDelegate__Protocol_h
#define _TtP12TwitterLists57ListManageMembersScrollingSegmentedViewControllerDelegate__Protocol_h
@import Foundation;

@protocol TwitterLists.ListManageMembersScrollingSegmentedViewControllerDelegate

@required

/* required instance methods */
- (void)didAddWithUser:(id)user forListID:(long long)id in:(id)in;
- (void)didRemoveWithUser:(id)user forListID:(long long)id in:(id)in;
- (_Bool)shouldRemoveWithUser:(id)user in:(id)in;

@optional

@end

#endif /* _TtP12TwitterLists57ListManageMembersScrollingSegmentedViewControllerDelegate__Protocol_h */
