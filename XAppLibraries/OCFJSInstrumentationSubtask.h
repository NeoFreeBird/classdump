//
#ifndef OCFJSInstrumentationSubtask_h
#define OCFJSInstrumentationSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSURL;

@interface OCFJSInstrumentationSubtask : OCFSubtask

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long timeoutMs;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFJSInstrumentationSubtask_h */
