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
