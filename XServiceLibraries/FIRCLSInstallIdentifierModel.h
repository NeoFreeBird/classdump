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
