//
#ifndef OCFActionListItemTextData_h
#define OCFActionListItemTextData_h
@import Foundation;

#include "OCFIcon.h"
#include "OCFRichText.h"

@class NSObject;

@interface OCFActionListItemTextData : NSObject

@property (retain, nonatomic) OCFRichText *text;
@property (retain, nonatomic) OCFRichText *detailText;
@property (retain, nonatomic) OCFIcon *icon;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFActionListItemTextData_h */
