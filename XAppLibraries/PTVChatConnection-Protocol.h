//
#ifndef PTVChatConnection_Protocol_h
#define PTVChatConnection_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVChatConnectionDelegate-Protocol.h"

@protocol PTVChatConnection <NSObject>

@required

@property (weak, nonatomic) id <PTVChatConnectionDelegate> delegate;

/* required instance methods */
- (id)initWithEndpoint:(id)endpoint;
- (void)open;
- (void)send:(id)send;
- (void)ping;
- (void)close;

@optional

@end

#endif /* PTVChatConnection_Protocol_h */
