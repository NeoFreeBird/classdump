//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSAContext_Protocol_h
#define TSAContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TFSTwitterPushSettingsManager-Protocol.h"

@class NSString;

@protocol TSAContext <NSObject>

@required

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) id <TFSTwitterPushSettingsManager> pushSettings;
@property (nonatomic, readonly) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) long long userType;

@optional

@end

#endif /* TSAContext_Protocol_h */
