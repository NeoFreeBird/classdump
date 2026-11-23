//
#ifndef TFNTwitterAccountPushSettingsProvider_Protocol_h
#define TFNTwitterAccountPushSettingsProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterAccountPushSettingsProvider <NSObject>

@required

/* required instance methods */
- (id)pushSettingsForAccount:(id)account;

@optional

@end

#endif /* TFNTwitterAccountPushSettingsProvider_Protocol_h */
