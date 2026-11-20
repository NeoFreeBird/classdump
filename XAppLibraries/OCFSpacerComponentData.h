//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSpacerComponentData_h
#define OCFSpacerComponentData_h
@import Foundation;

#include "OCFComponentData.h"

@interface OCFSpacerComponentData : OCFComponentData

@property (readonly, nonatomic) long long length;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithLength:(long long)length;

@end

#endif /* OCFSpacerComponentData_h */
