//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFActionListItem_h
#define OCFActionListItem_h
@import Foundation;

#include "OCFActionListItemData.h"

@class NSObject;

@interface OCFActionListItem : NSObject

@property (nonatomic) long long actionType;
@property (retain, nonatomic) OCFActionListItemData *actionData;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFActionListItem_h */
