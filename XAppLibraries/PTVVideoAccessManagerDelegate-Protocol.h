//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoAccessManagerDelegate_Protocol_h
#define PTVVideoAccessManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoAccessManagerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)videoAccessManager:(id)manager didLogEvent:(id)event;
- (void)videoAccessManager:(id)manager didUpdateVideoAccess:(id)access previousVideoAccess:(id)access;
- (void)videoAccessManager:(id)manager didFailToFetchVideoAccessWithError:(id)error;

@end

#endif /* PTVVideoAccessManagerDelegate_Protocol_h */
