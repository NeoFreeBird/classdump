//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCMCommunitiesFeatures_h
#define TCMCommunitiesFeatures_h
@import Foundation;

@class NSObject;

@interface TCMCommunitiesFeatures : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 features;
}

@property (nonatomic, readonly) _Bool communitiesAnalyticsEnabled;
@property (nonatomic, readonly) _Bool communitiesModerationLogEnabled;
@property (nonatomic, readonly) _Bool communitiesDiscoveryTopicCarouselEnabled;
@property (nonatomic, readonly) _Bool communitiesExploreTopicCarouselEnabled;
@property (nonatomic, readonly) _Bool communitiesEnabled;
@property (nonatomic, readonly) _Bool communitiesExploreEnabled;
@property (nonatomic, readonly) _Bool communitiesHomeTopTimelineEnabled;
@property (nonatomic, readonly) _Bool communitiesInlineCalloutEnabled;
@property (nonatomic, readonly) _Bool communityAdultContentDisplayEnabled;
@property (nonatomic, readonly) _Bool communityAdultContentSettingEnabled;
@property (nonatomic, readonly) _Bool communityAnswerBoxEnabled;
@property (nonatomic, readonly) _Bool communityAnswerBoxJoinPageEnabled;
@property (nonatomic, readonly) _Bool communityCreationEnabled;
@property (nonatomic, readonly) _Bool communityHashtagsEnabled;
@property (nonatomic, readonly) _Bool communityQuestionBoxEnabled;
@property (nonatomic, readonly) _Bool communityQuestionEditingBoxEnabled;
@property (nonatomic, readonly) _Bool communitySpamSettingsEnabled;
@property (nonatomic, readonly) _Bool communityTweetSearchEnabled;
@property (nonatomic, readonly) _Bool communityTopicChangeEnabled;
@property (nonatomic, readonly) _Bool communityTopicDisplayEnabled;
@property (nonatomic, readonly) _Bool communityHashtagsSuggestionsEnabled;
@property (nonatomic, readonly) _Bool nonMemberReplyEnabled;
@property (nonatomic, readonly) _Bool participationEnabled;
@property (nonatomic, readonly) _Bool pollCreationEnabled;
@property (nonatomic, readonly) _Bool removeMemberEnabled;
@property (nonatomic, readonly) _Bool shareTweetToCommunityEnabled;
@property (nonatomic, readonly) _Bool pinTweetToCommunityEnabled;

/* instance methods */
- (id)init;

@end

#endif /* TCMCommunitiesFeatures_h */
