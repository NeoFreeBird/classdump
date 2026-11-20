//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFButtonItemComponentData_h
#define OCFButtonItemComponentData_h
@import Foundation;

#include "OCFButtonAppearance.h"
#include "OCFComponentData.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@interface OCFButtonItemComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFButtonAppearance *buttonAppearance;
@property (readonly, nonatomic) OCFRichText *buttonLabel;
@property (readonly, nonatomic) OCFNavigationLink *navigationLink;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)componentNavigationLink;

@end

#endif /* OCFButtonItemComponentData_h */
