//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSSOSubtaskState_h
#define OCFSSOSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFSSOSubtaskState : OCFSubtaskState

@property (nonatomic) long long provider;
@property (copy, nonatomic) NSString *idToken;
@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *scopes;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *state;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFSSOSubtaskState_h */
