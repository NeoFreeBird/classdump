//
#ifndef TFNTwitterRecurringTaskContextPanelIDProvider_Protocol_h
#define TFNTwitterRecurringTaskContextPanelIDProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterRecurringTaskContextPanelIDProvider <NSObject>

@required

/* required instance methods */
- (long long)currentPanelID;

@optional

@end

#endif /* TFNTwitterRecurringTaskContextPanelIDProvider_Protocol_h */
