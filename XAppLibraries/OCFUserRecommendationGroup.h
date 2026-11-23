//
#ifndef OCFUserRecommendationGroup_h
#define OCFUserRecommendationGroup_h
@import Foundation;

#include "OCFShowMore.h"

@class NSArray, NSObject, NSString;

@interface OCFUserRecommendationGroup : NSObject

@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *subtitleText;
@property (readonly, nonatomic) OCFShowMore *showMore;
@property (readonly, nonatomic) NSArray *items;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFUserRecommendationGroup_h */
