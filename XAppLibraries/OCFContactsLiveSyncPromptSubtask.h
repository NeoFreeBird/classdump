//
#ifndef OCFContactsLiveSyncPromptSubtask_h
#define OCFContactsLiveSyncPromptSubtask_h
@import Foundation;

#include "OCFContactsLiveSyncOneStepPromptConfiguration.h"
#include "OCFHeaderImage.h"
#include "OCFNavigationLink.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSString;

@interface OCFContactsLiveSyncPromptSubtask : OCFSubtask

@property (readonly, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) OCFRichText *detailText;
@property (readonly, nonatomic) OCFHeaderImage *headerImage;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) OCFContactsLiveSyncOneStepPromptConfiguration *oneStepPromptConfiguration;

/* class methods */
+ (id)typeNames;
+ (long long)version;
+ (id)isReadySubtaskDataKey;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFContactsLiveSyncPromptSubtask_h */
