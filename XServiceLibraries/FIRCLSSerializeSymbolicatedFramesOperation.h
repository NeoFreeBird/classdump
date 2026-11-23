//
#ifndef FIRCLSSerializeSymbolicatedFramesOperation_h
#define FIRCLSSerializeSymbolicatedFramesOperation_h
@import Foundation;

#include "FIRCLSThreadArrayOperation.h"

@class NSString;

@interface FIRCLSSerializeSymbolicatedFramesOperation : FIRCLSThreadArrayOperation

@property (copy, nonatomic) NSString *outputPath;

/* instance methods */
- (void)main;

@end

#endif /* FIRCLSSerializeSymbolicatedFramesOperation_h */
