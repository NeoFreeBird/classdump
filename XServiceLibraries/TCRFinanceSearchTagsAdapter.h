//
#ifndef TCRFinanceSearchTagsAdapter_h
#define TCRFinanceSearchTagsAdapter_h
@import Foundation;

@class NSObject;

@interface TCRFinanceSearchTagsAdapter : NSObject // (Swift)

/* class methods */
+ (id)searchTagsWithQuery:(id)query pageSize:(id)size actionService:(id)service completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* TCRFinanceSearchTagsAdapter_h */
