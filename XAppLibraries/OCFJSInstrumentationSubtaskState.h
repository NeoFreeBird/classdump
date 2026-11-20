//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFJSInstrumentationSubtaskState_h
#define OCFJSInstrumentationSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFJSInstrumentationSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *response;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFJSInstrumentationSubtaskState_h */
