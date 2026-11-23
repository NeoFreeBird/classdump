//
#ifndef OCFSSOSubtask_h
#define OCFSSOSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFSubtask.h"

@class NSArray, NSString;

@interface OCFSSOSubtask : OCFSubtask

@property (readonly, nonatomic) long long provider;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *authURL;
@property (readonly, nonatomic) NSString *exchangeURL;
@property (readonly, nonatomic) NSArray *scopes;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *failLink;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFSSOSubtask_h */
