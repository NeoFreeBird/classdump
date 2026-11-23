//
#ifndef OCFInfoItemComponentData_h
#define OCFInfoItemComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFIcon.h"
#include "OCFImage.h"
#include "OCFRichText.h"

@interface OCFInfoItemComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFImage *image;
@property (readonly, nonatomic) OCFIcon *icon;
@property (readonly, nonatomic) long long style;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFInfoItemComponentData_h */
