//
#ifndef OCFProgressIndicatorComponentData_h
#define OCFProgressIndicatorComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFRichText.h"

@interface OCFProgressIndicatorComponentData : OCFComponentData

@property (readonly, nonatomic) long long progressPercentage;
@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithPrimaryText:(id)text secondaryText:(id)text progressPercentage:(long long)percentage;

@end

#endif /* OCFProgressIndicatorComponentData_h */
