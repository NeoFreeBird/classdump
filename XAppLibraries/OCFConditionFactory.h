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
