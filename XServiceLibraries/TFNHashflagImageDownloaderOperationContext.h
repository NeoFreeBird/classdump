//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNHashflagImageDownloaderOperationContext_h
#define TFNHashflagImageDownloaderOperationContext_h
@import Foundation;

#include "TFNHashflag.h"

@class NSMutableArray, NSObject;

@interface TFNHashflagImageDownloaderOperationContext : NSObject

@property (readonly, nonatomic) TFNHashflag *hashflag;
@property (readonly, nonatomic) NSMutableArray *completionHandlers;

/* instance methods */

@end

#endif /* TFNHashflagImageDownloaderOperationContext_h */
