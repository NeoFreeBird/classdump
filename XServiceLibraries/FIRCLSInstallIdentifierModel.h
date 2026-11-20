//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSInstallIdentifierModel_h
#define FIRCLSInstallIdentifierModel_h
@import Foundation;

#include "FIRInstallations.h"

@class NSObject, NSString;

@interface FIRCLSInstallIdentifierModel : NSObject

@property (copy, nonatomic) NSString *installID;
@property (readonly, nonatomic) FIRInstallations *installations;

/* instance methods */
- (id)initWithInstallations:(id)installations;
- (id)readInstallationUUID;
- (id)generateInstallationUUID;
- (_Bool)regenerateInstallIDIfNeededWithBlock:(id /* block */)block;
- (_Bool)rotateCrashlyticsInstallUUIDWithIID:(id)iid error:(id)error;

@end

#endif /* FIRCLSInstallIdentifierModel_h */
