//
#ifndef T1SettingsAuthorizationInstructionsAdapterDelegate_Protocol_h
#define T1SettingsAuthorizationInstructionsAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SettingsAuthorizationInstructionsAdapterDelegate <NSObject>

@required

/* required instance methods */
- (void)authorizationInstructionsAdapterDidOpenSettings:(id)settings;

@optional

@end

#endif /* T1SettingsAuthorizationInstructionsAdapterDelegate_Protocol_h */
