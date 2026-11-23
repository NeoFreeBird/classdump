//
#ifndef TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadStatusCommandOperation:(id)operation didCompleteWithMediaInformation:(id)information error:(id)error;

@end

#endif /* TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate_Protocol_h */
