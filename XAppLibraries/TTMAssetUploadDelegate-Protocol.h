//
#ifndef TTMAssetUploadDelegate_Protocol_h
#define TTMAssetUploadDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetUploadDelegate <NSObject>

@required

/* required instance methods */
- (void)mediaAssetUpload:(id)upload didStartWithAccountID:(id)id;
- (void)mediaAssetUpload:(id)upload didFinishSuccessfully:(_Bool)successfully error:(id)error;

@optional

/* optional instance methods */
- (void)mediaAssetUpload:(id)upload didUpdateProgress:(float)progress;
- (void)mediaAssetUpload:(id)upload didUpdateMediaInformation:(id)information expiryDate:(id)date;

@end

#endif /* TTMAssetUploadDelegate_Protocol_h */
