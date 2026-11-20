//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFWebModalSubtaskState_h
#define OCFWebModalSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFWebModalSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *completionDeepLink;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFWebModalSubtaskState_h */
