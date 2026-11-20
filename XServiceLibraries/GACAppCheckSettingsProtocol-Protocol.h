//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheckSettingsProtocol_Protocol_h
#define GACAppCheckSettingsProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckSettingsProtocol <NSObject>

@required

@property (nonatomic) _Bool isTokenAutoRefreshEnabled;

@optional

@end

#endif /* GACAppCheckSettingsProtocol_Protocol_h */
