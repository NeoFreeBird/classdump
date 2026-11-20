//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
