//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
