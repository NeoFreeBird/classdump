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
