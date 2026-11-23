//
#ifndef OCFChoiceSelectionSubtask_h
#define OCFChoiceSelectionSubtask_h
@import Foundation;

#include "OCFComponentCollection.h"
#include "OCFHeader.h"
#include "OCFNavigationLink.h"
#include "OCFNavigationLinkOptions.h"
#include "OCFRichText.h"
#include "OCFSearch.h"
#include "OCFShowMore.h"
#include "OCFSubtask.h"

@class NSArray;

@interface OCFChoiceSelectionSubtask : OCFSubtask {
    /* instance variables */
    OCFHeader *_header;
}

@property (readonly, nonatomic) NSArray *choices;
@property (readonly, nonatomic) NSArray *selectedChoiceIdentifiers;
@property (readonly, nonatomic) OCFShowMore *showMore;
@property (readonly, nonatomic) OCFHeader *primaryChoiceSelectionHeader;
@property (readonly, nonatomic) OCFComponentCollection *primaryChoiceComponentCollection;
@property (readonly, nonatomic) NSArray *primarySelectedChoiceIdentifiers;
@property (readonly, nonatomic) NSArray *primaryDetailVisibleChoiceIdentifiers;
@property (readonly, nonatomic) OCFRichText *primaryText;
@property (readonly, nonatomic) OCFRichText *secondaryText;
@property (readonly, nonatomic) OCFRichText *detailText;
@property (readonly, nonatomic) long long selectionType;
@property (readonly, nonatomic) OCFSearch *search;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) OCFNavigationLink *nextLink;
@property (readonly, nonatomic) OCFNavigationLink *skipLink;
@property (readonly, nonatomic) OCFNavigationLinkOptions *nextLinkOptions;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)header;

@end

#endif /* OCFChoiceSelectionSubtask_h */
