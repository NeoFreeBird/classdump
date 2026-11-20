//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSharingDelegate_Protocol_h
#define TASSharingDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASSharingDelegate <NSObject>

@required

/* required instance methods */
- (void)sharing:(id)sharing sendSharingEvent:(id)event;

@optional

@end

#endif /* TASSharingDelegate_Protocol_h */
