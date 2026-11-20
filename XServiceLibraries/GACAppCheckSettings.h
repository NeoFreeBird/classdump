//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheckSettings_h
#define GACAppCheckSettings_h
@import Foundation;

#include "GACAppCheckSettingsProtocol-Protocol.h"

@class NSObject, NSString;

@interface GACAppCheckSettings : NSObject <GACAppCheckSettingsProtocol>

@property (nonatomic) _Bool isTokenAutoRefreshEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* GACAppCheckSettings_h */
