//
#ifndef _TtCV4Jobs16JobBookmarksView9ViewModel_h
#define _TtCV4Jobs16JobBookmarksView9ViewModel_h
@import Foundation;

@class Jobs.JobsHubRootView.ViewModel, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$ss5Int32VMn, _$s7Combine9PublishedVMn _$sySa -> Jobs.JobBookmarksView.JobBookmarkListItem, _$ss5Int32VMn, _TtCs12_SwiftObject;

@interface Jobs.JobBookmarksView.ViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published nominal type descriptor for Swift.Int32 _totalCount;
    nominal type descriptor for Combine.Published nominal type descriptor for Swift.Int32 _loadedCount;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Jobs.JobBookmarksView.JobBookmarkListItem _jobs;
    nominal type descriptor for Combine.Published Swift.Bool _isLoading;
    nominal type descriptor for Swift.Int32 limit;
    Jobs.JobsHubRootView.ViewModel rootViewModel;
}

@end

#endif /* _TtCV4Jobs16JobBookmarksView9ViewModel_h */
