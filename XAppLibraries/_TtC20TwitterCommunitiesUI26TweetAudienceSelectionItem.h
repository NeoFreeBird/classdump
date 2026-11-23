//
#ifndef _TtC20TwitterCommunitiesUI26TweetAudienceSelectionItem_h
#define _TtC20TwitterCommunitiesUI26TweetAudienceSelectionItem_h
@import Foundation;

#include "TUITweetAudienceReference.h"

@class NSObject, NSString, Swift.Bool, TwitterCommunitiesUI.TweetAudienceReference, TwitterCommunitiesUI.TweetAudienceThumbnailInfo ?, _$sSSSg, _$sSo7UIColorC;

@interface TwitterCommunitiesUI.TweetAudienceSelectionItem : NSObject { // (Swift)
    /* instance variables */
    Swift.String? detailText;
    __C.UIColor tintColor;
    TwitterCommunitiesUI.TweetAudienceThumbnailInfo ? thumbnailInfo;
    Swift.Bool selected;
    Swift.Bool enabled;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) TUITweetAudienceReference *audienceReference;

/* instance methods */
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI26TweetAudienceSelectionItem_h */
