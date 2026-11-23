//
#ifndef OCFButtonComponentData_h
#define OCFButtonComponentData_h
@import Foundation;

#include "OCFButtonAppearance.h"
#include "OCFComponentData.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@interface OCFButtonComponentData : OCFComponentData

@property (readonly, nonatomic) OCFNavigationLink *navigationLink;
@property (readonly, nonatomic) OCFButtonAppearance *buttonAppearance;
@property (readonly, nonatomic) OCFRichText *buttonLabel;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithButtonAppearance:(id)appearance buttonLabel:(id)label navigationLink:(id)link;
- (id)componentNavigationLink;

@end

#endif /* OCFButtonComponentData_h */
