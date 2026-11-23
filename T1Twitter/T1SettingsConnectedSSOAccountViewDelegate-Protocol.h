//
#ifndef T1SettingsConnectedSSOAccountViewDelegate_Protocol_h
#define T1SettingsConnectedSSOAccountViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SettingsConnectedSSOAccountViewDelegate <NSObject>

@required

/* required instance methods */
- (void)didSucceedSSODisconnectFlow;
- (void)didFailToDisconnectSSOAccountWithProviderType:(id)type;

@optional

@end

#endif /* T1SettingsConnectedSSOAccountViewDelegate_Protocol_h */
