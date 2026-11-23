//
#ifndef _TtP14T1TwitterSwift47URTTimelineListViewModelTableRowAdapterDelegate__Protocol_h
#define _TtP14T1TwitterSwift47URTTimelineListViewModelTableRowAdapterDelegate__Protocol_h
@import Foundation;

@protocol T1TwitterSwift.URTTimelineListViewModelTableRowAdapterDelegate

@required

/* required instance methods */
- (void)adapter:(id)adapter didTapPinnedImageForListID:(long long)id isPinned:(_Bool)pinned;

@optional

/* optional instance methods */
- (void)adapter:(id)adapter customizeCell:(id)cell forListID:(long long)id isMember:(_Bool)member;
- (void)adapter:(id)adapter didSelectCell:(id)cell forListID:(long long)id andTargetUserID:(long long)id;

@end

#endif /* _TtP14T1TwitterSwift47URTTimelineListViewModelTableRowAdapterDelegate__Protocol_h */
