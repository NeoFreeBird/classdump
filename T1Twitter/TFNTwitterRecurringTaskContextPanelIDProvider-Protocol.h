//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
