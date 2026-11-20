//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFEnterDateSubtaskState_h
#define OCFEnterDateSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSDate;

@interface OCFEnterDateSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSDate *date;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFEnterDateSubtaskState_h */
