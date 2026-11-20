//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFEnterTextSubtaskState_h
#define OCFEnterTextSubtaskState_h
@import Foundation;

#include "OCFPasskeySubtaskState.h"
#include "OCFSubtaskState.h"

@class NSString;

@interface OCFEnterTextSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *suggestionID;
@property (retain, nonatomic) OCFPasskeySubtaskState *passKeyState;
@property (copy, nonatomic) NSString *castleToken;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFEnterTextSubtaskState_h */
