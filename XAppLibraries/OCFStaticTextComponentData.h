//
#ifndef OCFStaticTextComponentData_h
#define OCFStaticTextComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFRichText.h"

@interface OCFStaticTextComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) long long style;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithJSONDictionary:(id)jsondictionary legacyPrimaryText:(id)text error:(id *)error;
- (id)initWithPrimaryText:(id)text style:(long long)style;

@end

#endif /* OCFStaticTextComponentData_h */
