//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUITweetAudienceReference_h
#define TUITweetAudienceReference_h
@import Foundation;

@class NSObject, TFSTwitterCommunityReference, TFSTwitterPlace;

@interface TUITweetAudienceReference : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 audienceReference;
}

@property (nonatomic, readonly) _Bool isPublicAudience;
@property (nonatomic, readonly) _Bool isSuperFollowersAudience;
@property (nonatomic, readonly) TFSTwitterPlace *location;
@property (nonatomic, readonly) _Bool isLocationAudience;
@property (nonatomic, readonly) TFSTwitterCommunityReference *communityReference;

/* class methods */
+ (id)publicAudience;
+ (id)superFollowersAudience;
+ (void)setSuperFollowersAudience:(id)audience;

/* instance methods */
- (id)initWithLocation:(id)location;
- (id)initWithCommunityReference:(id)reference;
- (id)init;

@end

#endif /* TUITweetAudienceReference_h */
