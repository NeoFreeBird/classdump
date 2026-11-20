//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFActionComponentData_h
#define OCFActionComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@interface OCFActionComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFNavigationLink *actionLink;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;
- (id)componentNavigationLink;

@end

#endif /* OCFActionComponentData_h */
