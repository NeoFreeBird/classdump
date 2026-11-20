//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
