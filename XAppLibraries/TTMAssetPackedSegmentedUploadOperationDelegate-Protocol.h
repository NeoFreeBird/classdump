//
#ifndef TTMAssetPackedSegmentedUploadOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadOperation:(id)operation didProgress:(float)progress phase:(long long)phase;
- (void)packedSegmentedUploadOperation:(id)operation didUpdateMediaID:(id)id expiryDate:(id)date;

@end

#endif /* TTMAssetPackedSegmentedUploadOperationDelegate_Protocol_h */
