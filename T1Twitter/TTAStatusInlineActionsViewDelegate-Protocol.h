//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusInlineActionsViewDelegate_Protocol_h
#define TTAStatusInlineActionsViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTAStatusInlineActionsViewDelegate <NSObject>

@required

/* required instance methods */
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type;

@optional

/* optional instance methods */
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type prompt:(id)prompt menuItem:(long long)item;
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type prompt:(id)prompt menuItem:(long long)item;
- (void)inlineActionsView:(id)view didTapInlineFeedbackAction:(id)action;
- (void)inlineActionsView:(id)view didLongPressInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didLongPressInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didBeginLongPressForInlineActionType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didBeginLongPressForInlineActionType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didStartBrandedAnimationFromInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didStartBrandedAnimationFromInlineActionWithType:(unsigned long long)type;

@end

#endif /* TTAStatusInlineActionsViewDelegate_Protocol_h */
