//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMStaticConfig_Protocol_h
#define APMStaticConfig_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol APMStaticConfig <NSObject>

@required

@optional

@property (readonly, nonatomic) _Bool screenReportingEnabled;

@end

#endif /* APMStaticConfig_Protocol_h */
