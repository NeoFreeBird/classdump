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
