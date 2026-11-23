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
