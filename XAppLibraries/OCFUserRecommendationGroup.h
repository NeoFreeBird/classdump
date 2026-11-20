//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
