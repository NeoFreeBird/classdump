//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSThreadArrayOperation_h
#define FIRCLSThreadArrayOperation_h
@import Foundation;

@class NSArray, NSOperation;

@interface FIRCLSThreadArrayOperation : NSOperation

@property (retain, nonatomic) NSArray *threadArray;

/* instance methods */
- (void)enumerateFramesWithBlock:(id /* block */)block;

@end

#endif /* FIRCLSThreadArrayOperation_h */
