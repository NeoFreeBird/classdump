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
