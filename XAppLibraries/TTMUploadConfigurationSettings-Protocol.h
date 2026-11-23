//
#ifndef TTMUploadConfigurationSettings_Protocol_h
#define TTMUploadConfigurationSettings_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMUploadConfigurationSettings <NSObject>

@required

@property (readonly, nonatomic) _Bool isUploadFullHDVideoEnabled;
@property (readonly, nonatomic) _Bool isUploadFullHDVideoEnabledByDefault;
@property (readonly, nonatomic) _Bool isUpload4kVideoEnabled;
@property (readonly, nonatomic) _Bool isUpload4kVideoEnabledByDefault;
@property (readonly, nonatomic) _Bool isVideoTranscodeReactionsOptimizationEnabled;

@optional

@end

#endif /* TTMUploadConfigurationSettings_Protocol_h */
