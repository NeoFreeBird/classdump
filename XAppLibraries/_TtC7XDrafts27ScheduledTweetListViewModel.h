//
#ifndef _TtC7XDrafts27ScheduledTweetListViewModel_h
#define _TtC7XDrafts27ScheduledTweetListViewModel_h
@import Foundation;

@class XDrafts.ScheduledTweetDataService, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$ss5ErrorMp ?, _$s7Combine9PublishedVMn _$sySa -> XDrafts.ScheduledTweet, _TtCs12_SwiftObject;

@interface XDrafts.ScheduledTweetListViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> XDrafts.ScheduledTweet _scheduledTweets;
    nominal type descriptor for Combine.Published Swift.Bool _isLoading;
    nominal type descriptor for Combine.Published protocol descriptor for Swift.Error ? _error;
    XDrafts.ScheduledTweetDataService dataService;
}

@end

#endif /* _TtC7XDrafts27ScheduledTweetListViewModel_h */
