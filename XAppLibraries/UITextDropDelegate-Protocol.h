//
#ifndef UITextDropDelegate_Protocol_h
#define UITextDropDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITextDropDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (unsigned long long)textDroppableView:(id)view willBecomeEditableForDrop:(id)drop;
- (id)textDroppableView:(id)view proposalForDrop:(id)drop;
- (void)textDroppableView:(id)view willPerformDrop:(id)drop;
- (id)textDroppableView:(id)view previewForDroppingAllItemsWithDefault:(id)_default;
- (void)textDroppableView:(id)view dropSessionDidEnter:(id)enter;
- (void)textDroppableView:(id)view dropSessionDidUpdate:(id)update;
- (void)textDroppableView:(id)view dropSessionDidExit:(id)exit;
- (void)textDroppableView:(id)view dropSessionDidEnd:(id)end;

@end

#endif /* UITextDropDelegate_Protocol_h */
