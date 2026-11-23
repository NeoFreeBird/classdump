//
#ifndef OCFComponentData_Protocol_h
#define OCFComponentData_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSObject-Protocol.h"

@protocol OCFComponentData <NSObject, NSCopying, NSMutableCopying>

@required

/* class methods */
+ (id)alloc;

/* required instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)componentDictionariesWithIdentifier:(id)identifier;
- (id)componentNavigationLink;
- (_Bool)isComponentFullBleedTop;

@optional

@end

#endif /* OCFComponentData_Protocol_h */
