//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSSymbolicationOperation_h
#define FIRCLSSymbolicationOperation_h
@import Foundation;

#include "FIRCLSSymbolResolver.h"
#include "FIRCLSThreadArrayOperation.h"

@interface FIRCLSSymbolicationOperation : FIRCLSThreadArrayOperation

@property (retain, nonatomic) FIRCLSSymbolResolver *symbolResolver;

/* instance methods */
- (void)main;

@end

#endif /* FIRCLSSymbolicationOperation_h */
