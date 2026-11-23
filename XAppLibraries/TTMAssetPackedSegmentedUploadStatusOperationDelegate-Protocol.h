//
#ifndef TTMAssetPackedSegmentedUploadStatusOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadStatusOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadStatusOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadStatusOperation:(id)operation mediaID:(id)id didProgress:(float)progress;
- (void)packedSegmentedUploadStatusOperation:(id)operation mediaID:(id)id didCompleteWithExpiryDate:(id)date;

@end

#endif /* TTMAssetPackedSegmentedUploadStatusOperationDelegate_Protocol_h */
