//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCMCommunitiesFeaturesWrapper_Protocol_h
#define TCMCommunitiesFeaturesWrapper_Protocol_h
@import Foundation;

#include "TCMCommunitiesFeatures.h"

@protocol TCMCommunitiesFeaturesWrapper

@required

@property (nonatomic, readonly) TCMCommunitiesFeatures *wrappedCommunitiesFeatures;

@optional

@end

#endif /* TCMCommunitiesFeaturesWrapper_Protocol_h */
