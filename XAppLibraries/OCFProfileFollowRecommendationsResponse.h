//
#ifndef OCFProfileFollowRecommendationsResponse_h
#define OCFProfileFollowRecommendationsResponse_h
@import Foundation;

#include "OCFRichText.h"

@class NSArray, NSObject;

@interface OCFProfileFollowRecommendationsResponse : NSObject

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) OCFRichText *title;
@property (readonly, nonatomic) OCFRichText *subtitle;
@property (readonly, nonatomic) NSArray *recommendedUsers;
@property (readonly, nonatomic) _Bool showUserDismiss;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFProfileFollowRecommendationsResponse_h */
