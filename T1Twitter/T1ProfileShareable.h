//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileShareable_h
#define T1ProfileShareable_h
@import Foundation;

#include "TSCLimitedActionTypesProvidable-Protocol.h"
#include "TSCOffPlatformShareable-Protocol.h"
#include "TSCProtectionInfoProvidable-Protocol.h"
#include "TSCSnapshotShareable-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface T1ProfileShareable : NSObject <TSCOffPlatformShareable, TSCSnapshotShareable, TSCLimitedActionTypesProvidable, TSCProtectionInfoProvidable> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *userID;
    NSNumber"16@0:8 *displayName;
    NSNumber"16@0:8 *shareURL;
    NSNumber"16@0:8 *protectedUser;
    NSNumber"16@0:8 *viewFactory;
}

@property (nonatomic, readonly) NSNumber *scribeParameterID;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) _Bool isPrivateOrNonCompliant;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) double snapshotScale;
@property (nonatomic, readonly) _Bool isFromProtectedUser;

/* instance methods */
- (id)initWithUserID:(id)id displayName:(id)name shareURL:(id)url isProtectedUser:(_Bool)user viewFactory:(id /* block */)factory;
- (id)urlToTwitterFor:(unsigned long long)_for;
- (void)setShareTokenInURLEnabled:(_Bool)urlenabled;
- (unsigned long long)limitedActionTypesFor:(id)_for scribeContext:(id)context;
- (id)externalShareableViewFor:(id)_for layoutMetrics:(id)metrics;
- (id)videoReactionShareableViewFor:(id)_for layoutMetrics:(id)metrics;
- (id)init;

@end

#endif /* T1ProfileShareable_h */
