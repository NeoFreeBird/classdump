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
