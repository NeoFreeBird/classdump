//
#ifndef OCFInlineCalloutComponentData_h
#define OCFInlineCalloutComponentData_h
@import Foundation;

#include "OCFComponentData.h"
#include "OCFIcon.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@interface OCFInlineCalloutComponentData : OCFComponentData

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long iconSize;
@property (readonly, nonatomic) OCFRichText *headline;
@property (readonly, nonatomic) OCFRichText *body;
@property (readonly, nonatomic) OCFNavigationLink *actionLink;
@property (readonly, nonatomic) OCFNavigationLink *calloutTapLink;
@property (readonly, nonatomic) OCFIcon *customIcon;
@property (readonly, nonatomic) long long customBackgroundColor;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFInlineCalloutComponentData_h */
