//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeErrorDelegate_Protocol_h
#define TFSScribeErrorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSScribeErrorDelegate <NSObject>

@required

/* required instance methods */
- (void)scribeService:(id)service didEncounterError:(id)error;

@optional

@end

#endif /* TFSScribeErrorDelegate_Protocol_h */
