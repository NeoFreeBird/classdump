//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFConditionFactory_h
#define OCFConditionFactory_h
@import Foundation;

@class NSObject;

@interface OCFConditionFactory : NSObject

/* class methods */
+ (id)private_conditionClassesByTypeKey;
+ (id)conditionWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFConditionFactory_h */
