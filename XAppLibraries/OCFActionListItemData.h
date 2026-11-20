//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFActionListItemData_h
#define OCFActionListItemData_h
@import Foundation;

#include "OCFActionListItemLinkData.h"
#include "OCFActionListItemTextData.h"

@class NSObject;

@interface OCFActionListItemData : NSObject

@property (retain, nonatomic) OCFActionListItemLinkData *linkData;
@property (retain, nonatomic) OCFActionListItemTextData *textData;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFActionListItemData_h */
