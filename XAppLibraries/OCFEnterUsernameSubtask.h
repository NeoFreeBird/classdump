//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFEnterUsernameSubtask_h
#define OCFEnterUsernameSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSArray, NSString;

@interface OCFEnterUsernameSubtask : OCFSubtask

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) NSString *hint;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) NSArray *detailTexts;

/* class methods */
+ (long long)version;
+ (id)typeNames;
+ (id)nextDetailTextAction;
+ (id)setUsernameAction;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFEnterUsernameSubtask_h */
