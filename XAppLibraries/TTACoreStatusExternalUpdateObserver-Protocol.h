//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreStatusExternalUpdateObserver_Protocol_h
#define TTACoreStatusExternalUpdateObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTACoreStatusExternalUpdateObserver <NSObject>

@required

/* required instance methods */
- (void)didReceiveStatusExternalUpdateNotification:(id)notification ofType:(long long)type;

@optional

@end

#endif /* TTACoreStatusExternalUpdateObserver_Protocol_h */
