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
