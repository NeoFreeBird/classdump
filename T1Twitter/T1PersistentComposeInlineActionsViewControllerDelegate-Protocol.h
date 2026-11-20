//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PersistentComposeInlineActionsViewControllerDelegate_Protocol_h
#define T1PersistentComposeInlineActionsViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1PersistentComposeInlineActionsViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)inlineActionsViewController:(id)controller handleInlineActionEventType:(id)type inlineActionsView:(id)view inlineActionType:(unsigned long long)type;

@optional

@end

#endif /* T1PersistentComposeInlineActionsViewControllerDelegate_Protocol_h */
