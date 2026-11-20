//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFPrivacyOptionsSubtaskState_h
#define OCFPrivacyOptionsSubtaskState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "OCFSubtaskState.h"

@interface OCFPrivacyOptionsSubtaskState : OCFSubtaskState <NSCopying>

@property (nonatomic) _Bool discoverableByEmail;
@property (nonatomic) _Bool discoverableByPhone;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFPrivacyOptionsSubtaskState_h */
