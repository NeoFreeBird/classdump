//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
