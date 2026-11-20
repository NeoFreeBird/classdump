//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFInlineFeedbackComponentData_h
#define OCFInlineFeedbackComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@interface OCFInlineFeedbackComponentData : OCFComponentData

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) OCFRichText *title;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic) OCFRichText *affirmButtonLabel;
@property (readonly, nonatomic) OCFRichText *negateButtonLabel;
@property (readonly, nonatomic) OCFNavigationLink *affirmLink;
@property (readonly, nonatomic) OCFNavigationLink *negateLink;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFInlineFeedbackComponentData_h */
