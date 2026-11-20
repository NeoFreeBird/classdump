//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
