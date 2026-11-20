//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFGenericURTSubtask_h
#define OCFGenericURTSubtask_h
@import Foundation;

#include "OCFHeader.h"
#include "OCFNavigationLink.h"
#include "OCFNavigationLinkOptions.h"
#include "OCFRichTextOptions.h"
#include "OCFScribeConfig.h"
#include "OCFSubtask.h"
#include "OCFTimelineQuery.h"

@interface OCFGenericURTSubtask : OCFSubtask {
    /* instance variables */
    OCFHeader *_header;
}

@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLinkOptions *navigationLinkOptions;
@property (readonly, nonatomic) OCFRichTextOptions *detailRichTextOptions;
@property (readonly, nonatomic) OCFTimelineQuery *graphQLTimelineQuery;
@property (readonly, nonatomic) OCFScribeConfig *scribeConfig;

/* class methods */
+ (id)topicFollowCountSubtaskDataKey;
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFGenericURTSubtask_h */
