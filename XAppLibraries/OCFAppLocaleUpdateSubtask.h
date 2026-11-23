//
#ifndef OCFAppLocaleUpdateSubtask_h
#define OCFAppLocaleUpdateSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSString;

@interface OCFAppLocaleUpdateSubtask : OCFSubtask

@property (readonly, nonatomic) NSString *appLanguageCode;
@property (readonly, nonatomic) _Bool persistAppLanguage;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFAppLocaleUpdateSubtask_h */
