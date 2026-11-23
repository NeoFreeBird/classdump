//
#ifndef OCFEnterEmailSubtaskState_h
#define OCFEnterEmailSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSArray, NSNumber, NSString;

@interface OCFEnterEmailSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *selectedSettings;
@property (retain, nonatomic) NSNumber *discoverabilityValue;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFEnterEmailSubtaskState_h */
