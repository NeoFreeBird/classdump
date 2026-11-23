//
#ifndef OCFInAppNotificationSubtask_h
#define OCFInAppNotificationSubtask_h
@import Foundation;

#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@interface OCFInAppNotificationSubtask : OCFSubtask

@property (readonly, nonatomic) OCFRichText *message;
@property (readonly, nonatomic) long long waitTimeMs;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;

/* class methods */
+ (id)typeNames;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;

@end

#endif /* OCFInAppNotificationSubtask_h */
