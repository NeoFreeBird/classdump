//
#ifndef NSOperation_TFSOperationDependency_h
#define NSOperation_TFSOperationDependency_h
@import Foundation;

@interface NSOperation (TFSOperationDependency)

/* instance methods */
- (id)allDependencies;
- (id)firstFailedDependency;

@end

#endif /* NSOperation_TFSOperationDependency_h */
