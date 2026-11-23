//
#ifndef OCFEnterEmailSubtask_h
#define OCFEnterEmailSubtask_h
@import Foundation;

#include "OCFComponent.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSArray, NSString;

@interface OCFEnterEmailSubtask : OCFSubtask

@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) NSString *hintText;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) NSArray *settings;
@property (readonly, nonatomic) OCFComponent *discoverabilitySetting;

/* class methods */
+ (id)typeNames;
+ (long long)version;
+ (id)emailSubtaskDataKey;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFEnterEmailSubtask_h */
