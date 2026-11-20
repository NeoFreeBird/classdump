//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAPIRequestOperation_h
#define TFSAPIRequestOperation_h
@import Foundation;

#include "TFSAPIRequestDelegate-Protocol.h"
#include "TNLRequestOperation.h"

@interface TFSAPIRequestOperation : TNLRequestOperation

@property (retain, nonatomic) id context;
@property (weak, nonatomic) id <TFSAPIRequestDelegate> apiRequestDelegate;

/* instance methods */

@end

#endif /* TFSAPIRequestOperation_h */
