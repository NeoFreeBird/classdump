//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageAdditionalCache_Protocol_h
#define TIPImageAdditionalCache_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageAdditionalCache <NSObject>

@required

@optional

/* optional instance methods */
- (void)tip_retrieveImageForURL:(id)url completion:(id /* block */)completion;
- (void)tip_retrieveImageForURL:(id)url completion:(id /* block */)completion;

@end

#endif /* TIPImageAdditionalCache_Protocol_h */
