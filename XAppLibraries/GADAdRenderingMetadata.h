//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdRenderingMetadata_h
#define GADAdRenderingMetadata_h
@import Foundation;

#include "GADResponseInfo.h"

@class NSObject, NSString;

@interface GADAdRenderingMetadata : NSObject

@property (readonly, nonatomic) NSString *adNetworkClassName;
@property (readonly, nonatomic) GADResponseInfo *responseInfoOverride;

/* instance methods */
- (id)initWithAdNetworkClassName:(id)name;
- (id)initWithAdNetworkClassName:(id)name responseInfoOverride:(id)override;

@end

#endif /* GADAdRenderingMetadata_h */
