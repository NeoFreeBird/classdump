//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLimitedAction_h
#define TFSTwitterLimitedAction_h
@import Foundation;

#include "TFSTwitterLimitedActionPrompt.h"

@class NSObject;

@interface TFSTwitterLimitedAction : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 actionType;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) TFSTwitterLimitedActionPrompt *prompt;

/* instance methods */
- (id)initWithLegacyValue:(id)value;
- (id)init;

@end

#endif /* TFSTwitterLimitedAction_h */
