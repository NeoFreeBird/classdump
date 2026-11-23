//
#ifndef _TtC7XDrafts24TweetDraftsListViewModel_h
#define _TtC7XDrafts24TweetDraftsListViewModel_h
@import Foundation;

@class Swift.Bool, XDrafts.MergedDraftListDatasource, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$ss5ErrorMp ?, _$s7Combine9PublishedVMn _$sySa -> XDrafts.DraftListItem, _$sSi, _TtCs12_SwiftObject;

@interface XDrafts.TweetDraftsListViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> XDrafts.DraftListItem _drafts;
    nominal type descriptor for Combine.Published Swift.Bool _isLoading;
    nominal type descriptor for Combine.Published Swift.Bool _isLoadingMore;
    nominal type descriptor for Combine.Published Swift.Bool _hasMore;
    nominal type descriptor for Combine.Published protocol descriptor for Swift.Error ? _error;
    Swift.Bool isRefreshing;
    Swift.Int loadToken;
    XDrafts.MergedDraftListDatasource dataService;
}

@end

#endif /* _TtC7XDrafts24TweetDraftsListViewModel_h */
