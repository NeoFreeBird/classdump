//
#ifndef TIPSafeOperation_h
#define TIPSafeOperation_h
@import Foundation;

@class NSOperation;

@interface TIPSafeOperation : NSOperation

/* instance methods */
- (void)setCompletionBlock:(id /* block */)block;
- (void)tip_clearCompletionBlock;

@end

#endif /* TIPSafeOperation_h */
