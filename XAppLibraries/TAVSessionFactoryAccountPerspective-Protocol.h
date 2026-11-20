//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVSessionFactoryAccountPerspective_Protocol_h
#define TAVSessionFactoryAccountPerspective_Protocol_h
@import Foundation;

#include "TAFDynamicVideoAdManager.h"
#include "TFNTwitterPromotedEventLogger.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h"

@protocol TAVSessionFactoryAccountPerspective <TAPAccount.TAPAccountPerspective>

@required

@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) TFNTwitterPromotedEventLogger *promotedEventLogger;
@property (readonly, nonatomic) TAFDynamicVideoAdManager *dynamicVideoAdManager;

@optional

@end

#endif /* TAVSessionFactoryAccountPerspective_Protocol_h */
