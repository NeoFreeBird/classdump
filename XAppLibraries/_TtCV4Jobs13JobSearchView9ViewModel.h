//
#ifndef _TtCV4Jobs13JobSearchView9ViewModel_h
#define _TtCV4Jobs13JobSearchView9ViewModel_h
@import Foundation;

@class Jobs.JobsHubRootView.ViewModel, _$s7Combine9PublishedVMn Jobs.JobLocation ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSaySSG, _$s7Combine9PublishedVMn _$sySa -> Jobs.JobLocation, _$s7Combine9PublishedVMn _$sySa -> _$s14TFSTwitterCore16JobTimelineEntryOMn, _TtCs12_SwiftObject;

@interface Jobs.JobSearchView.ViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for TFSTwitterCore.JobTimelineEntry _jobs;
    nominal type descriptor for Combine.Published [Swift.String] _loadedCursors;
    nominal type descriptor for Combine.Published Swift.String _keywordSearchQuery;
    nominal type descriptor for Combine.Published Swift.String _locationSearchQuery;
    nominal type descriptor for Combine.Published Jobs.JobLocation ? _locationSearchItem;
    nominal type descriptor for Combine.Published Swift.Bool _isSearching;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Jobs.JobLocation _locationTypeAheadResults;
    Jobs.JobsHubRootView.ViewModel rootViewModel;
}

@end

#endif /* _TtCV4Jobs13JobSearchView9ViewModel_h */
