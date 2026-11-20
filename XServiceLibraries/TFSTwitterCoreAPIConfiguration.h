//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterCoreAPIConfiguration_h
#define TFSTwitterCoreAPIConfiguration_h
@import Foundation;

#include "TFSTwitterCoreAPIConfiguration-Protocol.h"

@class NSObject;

@interface TFSTwitterCoreAPIConfiguration : NSObject <TFSTwitterCoreAPIConfiguration>

@property (readonly, nonatomic) long long scribeAPISampleSize;
@property (readonly, nonatomic) long long scribeAPIErrorSampleSize;
@property (readonly, nonatomic) _Bool isBirdwatchConsumptionEnabled;
@property (readonly, nonatomic) _Bool isBirdwatchPivotEnabled;
@property (readonly, nonatomic) _Bool isSuperFollowsTweetCreationEnabled;
@property (readonly, nonatomic) _Bool isDontMentionMeAPIEnabled;
@property (readonly, nonatomic) _Bool isArticleRestAPIEnabled;
@property (readonly, nonatomic) _Bool isArticlePreviewEnabled;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)init;

@end

#endif /* TFSTwitterCoreAPIConfiguration_h */
