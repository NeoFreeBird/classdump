//
#ifndef TNLSafeOperation_h
#define TNLSafeOperation_h
@import Foundation;

@class NSOperation;

@interface TNLSafeOperation : NSOperation

/* instance methods */
- (void)setCompletionBlock:(id /* block */)block;
- (void)tnl_clearCompletionBlock;

@end

#endif /* TNLSafeOperation_h */
