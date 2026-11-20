//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFActionListItemLinkData_h
#define OCFActionListItemLinkData_h
@import Foundation;

#include "OCFIcon.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"

@class NSObject;

@interface OCFActionListItemLinkData : NSObject

@property (retain, nonatomic) OCFNavigationLink *link;
@property (retain, nonatomic) OCFRichText *text;
@property (retain, nonatomic) OCFRichText *detailText;
@property (retain, nonatomic) OCFIcon *icon;
@property (nonatomic) _Bool completed;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFActionListItemLinkData_h */
