//
#ifndef OCFTweetSelectionURTSubtask_h
#define OCFTweetSelectionURTSubtask_h
@import Foundation;

#include "OCFHeader.h"
#include "OCFNavigationLink.h"
#include "OCFNavigationLinkOptions.h"
#include "OCFSubtask.h"
#include "OCFTimelineQuery.h"

@interface OCFTweetSelectionURTSubtask : OCFSubtask {
    /* instance variables */
    OCFHeader *_header;
}

@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) OCFNavigationLinkOptions *nextLinkOptions;
@property (readonly, nonatomic) OCFTimelineQuery *graphqlTimelineQuery;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFTweetSelectionURTSubtask_h */
