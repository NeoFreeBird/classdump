//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterScribeErrorHandler_h
#define TFSTwitterScribeErrorHandler_h
@import Foundation;

#include "TFSScribeErrorDelegate-Protocol.h"

@class NSObject;

@interface TFSTwitterScribeErrorHandler : NSObject <TFSScribeErrorDelegate> // (Swift)

/* instance methods */
- (void)handleError:(id)error;
- (void)scribeService:(id)service didEncounterError:(id)error;
- (id)init;

@end

#endif /* TFSTwitterScribeErrorHandler_h */
