//
#ifndef TTMAssetHashable_Protocol_h
#define TTMAssetHashable_Protocol_h
@import Foundation;

@protocol TTMAssetHashable

@required

@property (readonly, nonatomic) unsigned long long hashableSource;

@optional

/* optional instance methods */
- (void)originalMediaDataWithCompletion:(id /* block */)completion;
- (void)originalMediaURLWithCompletion:(id /* block */)completion;

@end

#endif /* TTMAssetHashable_Protocol_h */
