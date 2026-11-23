//
#ifndef TTMUploadConfigurationSettings_Protocol_h
#define TTMUploadConfigurationSettings_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMUploadConfigurationSettings <NSObject>

@required

@property (nonatomic, readonly) _Bool isUploadFullHDVideoEnabled;
@property (nonatomic, readonly) _Bool isUploadFullHDVideoEnabledByDefault;
@property (nonatomic, readonly) _Bool isUpload4kVideoEnabled;
@property (nonatomic, readonly) _Bool isUpload4kVideoEnabledByDefault;
@property (nonatomic, readonly) _Bool isVideoTranscodeReactionsOptimizationEnabled;

@optional

@end

#endif /* TTMUploadConfigurationSettings_Protocol_h */
