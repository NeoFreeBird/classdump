//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_31EABD6AD6DB0F4CC8F7E94F2A08E92528SportsPlayPostActionsSession_h
#define _TtC14T1TwitterSwiftP33_31EABD6AD6DB0F4CC8F7E94F2A08E92528SportsPlayPostActionsSession_h
@import Foundation;

#include "TTAStatusInlineActionsViewDelegate-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(SportsPlayPostActionsSession in _31EABD6AD6DB0F4CC8F7E94F2A08E925) : NSObject <TTAStatusInlineActionsViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *container;
    NSNumber"16@0:8 *scrollView;
    NSNumber"16@0:8 *presenter;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *actionsView;
    NSNumber"16@0:8 *actionHandler;
    NSNumber"16@0:8 *impressionScriber;
    NSNumber"16@0:8 *isOnScreen;
    NSNumber"16@0:8 *isTornDown;
}

/* instance methods */
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didBeginLongPressForInlineActionType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didLongPressInlineActionWithType:(unsigned long long)type;
- (void)statusDidUpdate;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_31EABD6AD6DB0F4CC8F7E94F2A08E92528SportsPlayPostActionsSession_h */
