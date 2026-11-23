//
#ifndef _TtC10XBookmarks26BookmarkFolderTimelineItem_h
#define _TtC10XBookmarks26BookmarkFolderTimelineItem_h
@import Foundation;

@class NSObject, _$s14TFSTwitterCore16TwitterMediaInfoCMn ?, _$sSS, _$sSbSg, _$ss5Int64VMn;

@interface XBookmarks.BookmarkFolderTimelineItem : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 id;
    Swift.String name;
    Swift.Bool? containsRequestedTweet;
    nominal type descriptor for TFSTwitterCore.TwitterMediaInfo ? thumbnailMediaInfo;
}

@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC10XBookmarks26BookmarkFolderTimelineItem_h */
