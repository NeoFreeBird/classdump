//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC26TwitterHomePinnedTimelines23PinnedTimelineDataModel_h
#define _TtC26TwitterHomePinnedTimelines23PinnedTimelineDataModel_h
@import Foundation;

@class NSNumber, NSObject, NSString, TwitterHomePinnedTimelines.PinnedTimelineDataModel.Timeline, _$s10Foundation3URLVMn ?, _$sSS;

@interface TwitterHomePinnedTimelines.PinnedTimelineDataModel : NSObject { // (Swift)
    /* instance variables */
    TwitterHomePinnedTimelines.PinnedTimelineDataModel.Timeline timeline;
    nominal type descriptor for Foundation.URL ? bannerUrl;
}

@property (nonatomic, readonly) NSString *tagID;
@property (nonatomic, readonly) NSString *tagIconName;
@property (nonatomic, readonly) NSString *tagIconImageUrl;
@property (nonatomic, readonly) NSString *communityID;
@property (nonatomic, readonly) NSNumber *listID;
@property (nonatomic, readonly) _Bool isSortedByLikes;
@property (nonatomic, readonly) _Bool isSortedByRecency;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *displayName;

/* instance methods */
- (void)sortByLikes;
- (void)sortByRecency;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC26TwitterHomePinnedTimelines23PinnedTimelineDataModel_h */
