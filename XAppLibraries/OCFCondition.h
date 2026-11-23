//
#ifndef OCFCondition_h
#define OCFCondition_h
@import Foundation;

#include "OCFCondition-Protocol.h"

@class NSObject, NSString;

@interface OCFCondition : NSObject <OCFCondition>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)conditionTypeKey;
+ (id)conditionDataKey;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithJSONDictionary:(id)jsondictionary identifier:(id)identifier error:(id *)error;
- (_Bool)evaluateWithComponents:(id)components;

@end

#endif /* OCFCondition_h */
