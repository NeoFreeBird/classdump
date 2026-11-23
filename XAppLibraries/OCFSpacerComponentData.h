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
