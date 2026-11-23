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
