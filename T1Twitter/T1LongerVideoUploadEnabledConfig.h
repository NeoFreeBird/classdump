//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LongerVideoUploadEnabledConfig_h
#define T1LongerVideoUploadEnabledConfig_h
@import Foundation;

#include "TTMUploadConfigurationSettings-Protocol.h"

@class NSObject;

@interface T1LongerVideoUploadEnabledConfig : NSObject <TTMUploadConfigurationSettings> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *migrationHelper;
}

@property (nonatomic, readonly) _Bool isUploadFullHDVideoEnabled;
@property (nonatomic, readonly) _Bool isUploadFullHDVideoEnabledByDefault;
@property (nonatomic, readonly) _Bool isUpload4kVideoEnabled;
@property (nonatomic, readonly) _Bool isUpload4kVideoEnabledByDefault;
@property (nonatomic, readonly) _Bool isVideoTranscodeReactionsOptimizationEnabled;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* T1LongerVideoUploadEnabledConfig_h */
