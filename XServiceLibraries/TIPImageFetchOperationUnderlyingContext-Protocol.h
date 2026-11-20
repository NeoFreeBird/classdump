//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageFetchOperationUnderlyingContext_Protocol_h
#define TIPImageFetchOperationUnderlyingContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageFetchOperationUnderlyingContext <NSObject>

@required

/* required instance methods */
- (id)associatedImageFetchOperation;

@optional

@end

#endif /* TIPImageFetchOperationUnderlyingContext_Protocol_h */
