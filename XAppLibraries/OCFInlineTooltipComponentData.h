//
#ifndef OCFInlineTooltipComponentData_h
#define OCFInlineTooltipComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFIcon.h"
#include "OCFImage.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@interface OCFInlineTooltipComponentData : OCFComponentData

@property (readonly, nonatomic) OCFRichText *title;
@property (readonly, nonatomic) OCFIcon *icon;
@property (readonly, nonatomic) OCFImage *image;
@property (readonly, nonatomic) OCFNavigationLink *dismissLink;
@property (readonly, nonatomic) long long backgroundColor;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFInlineTooltipComponentData_h */
