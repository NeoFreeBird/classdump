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
