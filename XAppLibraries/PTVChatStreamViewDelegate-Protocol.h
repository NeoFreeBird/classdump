//
#ifndef PTVChatStreamViewDelegate_Protocol_h
#define PTVChatStreamViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatStreamViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatStreamViewDidSelectScrollToBottomOfChatStream:(id)stream;

@end

#endif /* PTVChatStreamViewDelegate_Protocol_h */
