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
