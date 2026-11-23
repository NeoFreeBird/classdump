//
#ifndef OCFSubtask_h
#define OCFSubtask_h
@import Foundation;

#include "OCFComponentCollection.h"
#include "OCFHeader.h"
#include "OCFNavigationLink.h"

@class NSArray, NSObject, NSString;

@interface OCFSubtask : NSObject

@property (readonly, nonatomic) NSString *subtaskID;
@property (readonly, nonatomic) long long backNavigationType;
@property (readonly, nonatomic) OCFNavigationLink *backNavigationLink;
@property (readonly, nonatomic) OCFComponentCollection *componentCollection;
@property (readonly, nonatomic) OCFHeader *header;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) _Bool suppressClientEvents;
@property (retain, nonatomic) NSArray *callbacks;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFSubtask_h */
