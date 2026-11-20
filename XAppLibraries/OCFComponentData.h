//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFComponentData_h
#define OCFComponentData_h
@import Foundation;

#include "OCFComponentData-Protocol.h"

@class NSObject, NSString;

@interface OCFComponentData : NSObject <OCFComponentData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)componentDictionariesWithIdentifier:(id)identifier;
- (id)componentNavigationLink;
- (_Bool)isComponentFullBleedTop;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* OCFComponentData_h */
