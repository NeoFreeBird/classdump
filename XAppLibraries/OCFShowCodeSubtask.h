//
#ifndef OCFShowCodeSubtask_h
#define OCFShowCodeSubtask_h
@import Foundation;

#include "OCFHeader.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSString;

@interface OCFShowCodeSubtask : OCFSubtask {
    /* instance variables */
    OCFHeader *_header;
}

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) OCFRichText *detailText;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFShowCodeSubtask_h */
