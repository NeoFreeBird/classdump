//
#ifndef FIRCLSDemangleOperation_h
#define FIRCLSDemangleOperation_h
@import Foundation;

#include "FIRCLSThreadArrayOperation.h"

@interface FIRCLSDemangleOperation : FIRCLSThreadArrayOperation

/* class methods */
+ (id)demangleSymbol:(const char *)symbol;
+ (id)demangleBlockInvokeCppSymbol:(const char *)symbol;
+ (id)demangleCppSymbol:(const char *)symbol;

/* instance methods */
- (id)demangleSymbol:(const char *)symbol;
- (void)main;

@end

#endif /* FIRCLSDemangleOperation_h */
