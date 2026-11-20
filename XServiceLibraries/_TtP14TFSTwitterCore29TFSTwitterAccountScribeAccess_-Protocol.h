//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP14TFSTwitterCore29TFSTwitterAccountScribeAccess__Protocol_h
#define _TtP14TFSTwitterCore29TFSTwitterAccountScribeAccess__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@protocol TFSTwitterCore.TFSTwitterAccountScribeAccess <NSObject>

@required

@property (nonatomic, readonly) id <TFSTwitterLegacyScribeLogMethods> scribe;

@optional

@end

#endif /* _TtP14TFSTwitterCore29TFSTwitterAccountScribeAccess__Protocol_h */
