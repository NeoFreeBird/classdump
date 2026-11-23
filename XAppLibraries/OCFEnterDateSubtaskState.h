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
