//
#ifndef OCFSettingsListSubtaskState_h
#define OCFSettingsListSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSArray, NSString;

@interface OCFSettingsListSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSArray *selectedSettings;
@property (copy, nonatomic) NSString *castleToken;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFSettingsListSubtaskState_h */
