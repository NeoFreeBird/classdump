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
