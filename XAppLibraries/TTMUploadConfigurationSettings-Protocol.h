//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
