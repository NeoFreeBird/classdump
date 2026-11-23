//
#ifndef FIRInstallationsBackoffControllerProtocol_Protocol_h
#define FIRInstallationsBackoffControllerProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol FIRInstallationsBackoffControllerProtocol <NSObject>

@required

/* required instance methods */
- (void)registerEvent:(long long)event;
- (_Bool)isNextRequestAllowed;

@optional

@end

#endif /* FIRInstallationsBackoffControllerProtocol_Protocol_h */
