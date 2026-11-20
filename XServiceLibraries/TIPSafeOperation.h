//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
