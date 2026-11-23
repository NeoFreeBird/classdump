//
#ifndef APMPRuntimeEntityConverter_h
#define APMPRuntimeEntityConverter_h
@import Foundation;

@class NSObject;

@interface APMPRuntimeEntityConverter : NSObject

/* class methods */
+ (id)stringValueFromRuntimeEntity:(id)entity;
+ (id)numberValueFromRuntimeEntity:(id)entity;
+ (id)booleanValueFromRuntimeEntity:(id)entity;
+ (id)statementValueFromRuntimeEntity:(id)entity error:(id *)error;
+ (id)runtimeValueFromRuntimeEntity:(id)entity error:(id *)error;
+ (id)runtimeValueFromNSObject:(id)nsobject scope:(id)scope error:(id *)error;
+ (id)objectFromRuntimeValue:(id)value error:(id *)error;
+ (id)dictionaryFromMapValue:(id)value error:(id *)error;

@end

#endif /* APMPRuntimeEntityConverter_h */
