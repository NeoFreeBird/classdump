//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVLoggingScribe_h
#define TAVLoggingScribe_h
@import Foundation;

#include "TAVScribe-Protocol.h"
#include "TFSLogger-Protocol.h"

@class NSObject;

@interface TAVLoggingScribe : NSObject <TAVScribe>

@property (readonly, nonatomic) id <TFSLogger> logger;

/* instance methods */
- (id)init;
- (id)initWithLogger:(id)logger;
- (void)logClientEventWithName:(id)name parameters:(id)parameters;
- (void)logPromotedEventWithName:(id)name parameters:(id)parameters;

@end

#endif /* TAVLoggingScribe_h */
