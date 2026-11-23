//
#ifndef _TtCC10TwitterURT31URTTimelineMessageItemViewModelP33_62ED239EA798865687F87AAECEE583CF25PromptUserFacepileWrapper_h
#define _TtCC10TwitterURT31URTTimelineMessageItemViewModelP33_62ED239EA798865687F87AAECEE583CF25PromptUserFacepileWrapper_h
@import Foundation;

#include "TwitterTimelineMessageTextAction-Protocol.h"
#include "TwitterTimelinePromptUserFacepile-Protocol.h"

@class NSArray, _TtCs12_SwiftObject;

@interface TwitterURT.URTTimelineMessageItemViewModel.(PromptUserFacepileWrapper in _62ED239EA798865687F87AAECEE583CF) : Swift._SwiftObject <TwitterTimelinePromptUserFacepile> // (Swift)

@property (nonatomic, readonly) NSArray *users;
@property (nonatomic, readonly) NSArray *featuredUsers;
@property (nonatomic, readonly) id <TwitterTimelineMessageTextAction> action;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) _Bool displaysFeaturingText;
@property (nonatomic, readonly) long long displayType;

@end

#endif /* _TtCC10TwitterURT31URTTimelineMessageItemViewModelP33_62ED239EA798865687F87AAECEE583CF25PromptUserFacepileWrapper_h */
