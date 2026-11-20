//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFAlertExampleComponentData_h
#define OCFAlertExampleComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFImage.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@class NSArray, NSNumber;

@interface OCFAlertExampleComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFImage *image;
@property (readonly, nonatomic) NSArray *buttonLabels;
@property (readonly, nonatomic) NSNumber *buttonHighlightIndex;
@property (readonly, nonatomic) OCFNavigationLink *navigationLink;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)componentNavigationLink;

@end

#endif /* OCFAlertExampleComponentData_h */
