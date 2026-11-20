//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
