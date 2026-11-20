//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBUserRecommendationGroup_h
#define ONBUserRecommendationGroup_h
@import Foundation;

@class NSArray, NSObject, NSString, OCFShowMore;

@interface ONBUserRecommendationGroup : NSObject

@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *subtitleText;
@property (readonly, nonatomic) OCFShowMore *showMore;
@property (readonly, nonatomic) NSArray *userRecommendations;

/* instance methods */
- (id)initWithGroupID:(id)id titleText:(id)text subtitleText:(id)text userRecommendations:(id)recommendations showMore:(id)more;
- (id)init;

@end

#endif /* ONBUserRecommendationGroup_h */
