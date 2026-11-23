//
#ifndef XApiAccountContextProviding_Protocol_h
#define XApiAccountContextProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol XApiAccountContextProviding <NSObject>

@required

/* required instance methods */
- (void)accountContextForAccountID:(id)id completion:(id /* block */)completion;

@optional

@end

#endif /* XApiAccountContextProviding_Protocol_h */
