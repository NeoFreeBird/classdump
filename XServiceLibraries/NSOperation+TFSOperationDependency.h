//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
