//
#ifndef TwitterTimelinePromptUserFacepile_Protocol_h
#define TwitterTimelinePromptUserFacepile_Protocol_h
@import Foundation;

#include "TwitterTimelineMessageTextAction-Protocol.h"

@class NSArray;

@protocol TwitterTimelinePromptUserFacepile

@required

@property (nonatomic, readonly) NSArray *users;
@property (nonatomic, readonly) NSArray *featuredUsers;
@property (nonatomic, readonly) id <TwitterTimelineMessageTextAction> action;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) _Bool displaysFeaturingText;
@property (nonatomic, readonly) long long displayType;

@optional

@end

#endif /* TwitterTimelinePromptUserFacepile_Protocol_h */
