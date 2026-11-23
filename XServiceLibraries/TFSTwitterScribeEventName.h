//
#ifndef TFSTwitterScribeEventName_h
#define TFSTwitterScribeEventName_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterScribeEventName : NSObject <NSCopying>

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *section;
@property (copy, nonatomic) NSString *component;
@property (copy, nonatomic) NSString *element;

/* class methods */
+ (id)eventNameWithAction:(id)action;
+ (id)eventNameStringForClient:(id)client eventName:(id)name;

/* instance methods */
- (id)initWithAction:(id)action;
- (id)initWithEventName:(id)name;
- (id)eventNameString;
- (id)eventNameStringForClient:(id)client;
- (id)eventNamespaceDictionaryForClient:(id)client;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterScribeEventName_h */
