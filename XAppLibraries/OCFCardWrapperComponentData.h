//
#ifndef OCFCardWrapperComponentData_h
#define OCFCardWrapperComponentData_h
@import Foundation;

#include "OCFComponentData.h"

@class NSArray;

@interface OCFCardWrapperComponentData : OCFComponentData

@property (readonly, nonatomic) NSArray *components;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFCardWrapperComponentData_h */
