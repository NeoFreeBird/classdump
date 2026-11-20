//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFPasskeySubtask_h
#define OCFPasskeySubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"
#include "OCFWebAuthnChallenge.h"

@interface OCFPasskeySubtask : OCFSubtask

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) OCFWebAuthnChallenge *challenge;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFPasskeySubtask_h */
