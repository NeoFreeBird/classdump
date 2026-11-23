//
#ifndef GDTCORLifecycleProtocol_Protocol_h
#define GDTCORLifecycleProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GDTCORLifecycleProtocol <NSObject>

@required

@optional

/* optional instance methods */
- (void)appWillTerminate:(id)terminate;
- (void)appWillBackground:(id)background;
- (void)appWillForeground:(id)foreground;

@end

#endif /* GDTCORLifecycleProtocol_Protocol_h */
