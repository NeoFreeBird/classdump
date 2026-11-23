//
#ifndef OCFUserRecommendationsListSubtask_h
#define OCFUserRecommendationsListSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSArray, NSString;

@interface OCFUserRecommendationsListSubtask : OCFSubtask

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) NSString *searchHint;
@property (readonly, nonatomic) OCFRichText *nextLinkLabelEnabledText;
@property (readonly, nonatomic) OCFRichText *nextLinkLabelDisabledText;
@property (retain, nonatomic) NSArray *nextLinkThresholdText;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long followButtonType;
@property (readonly, nonatomic) long long fetchUserRecommendationsLocation;
@property (readonly, nonatomic) long long minFollowCount;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) OCFRichText *categoryTooltipText;
@property (readonly, nonatomic) OCFRichText *userTooltipText;
@property (readonly, nonatomic) OCFRichText *progressIndicatorText;

/* class methods */
+ (id)typeNames;
+ (id)completedFollowCountSubtaskDataKey;
+ (id)remainingFollowCountSubtaskDataKey;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFUserRecommendationsListSubtask_h */
