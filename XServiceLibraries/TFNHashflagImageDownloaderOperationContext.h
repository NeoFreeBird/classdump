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
