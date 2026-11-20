//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCProductExplorerModelFetcher_h
#define TUCProductExplorerModelFetcher_h
@import Foundation;

@class NSObject;

@interface TUCProductExplorerModelFetcher : NSObject // (Swift)

/* class methods */
+ (void)fetchModelFrom:(id)from completionHandler:(id /* block */)handler;
+ (void)fetchModelFrom:(id)from;

/* instance methods */
- (id)init;

@end

#endif /* TUCProductExplorerModelFetcher_h */
