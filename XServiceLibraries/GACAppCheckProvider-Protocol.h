//
#ifndef GACAppCheckProvider_Protocol_h
#define GACAppCheckProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckProvider <NSObject>

@required

/* required instance methods */
- (void)getTokenWithCompletion:(id /* block */)completion;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* GACAppCheckProvider_Protocol_h */
