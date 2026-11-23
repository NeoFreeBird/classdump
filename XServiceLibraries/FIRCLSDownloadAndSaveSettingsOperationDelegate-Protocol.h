//
#ifndef FIRCLSDownloadAndSaveSettingsOperationDelegate_Protocol_h
#define FIRCLSDownloadAndSaveSettingsOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol FIRCLSDownloadAndSaveSettingsOperationDelegate <NSObject>

@required

/* required instance methods */
- (void)operation:(id)operation didDownloadAndSaveSettingsWithError:(id)error;

@optional

@end

#endif /* FIRCLSDownloadAndSaveSettingsOperationDelegate_Protocol_h */
