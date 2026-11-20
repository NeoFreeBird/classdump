//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFCTASubtask_h
#define OCFCTASubtask_h
@import Foundation;

#include "OCFHeader.h"
#include "OCFRichText.h"
#include "OCFSubtask.h"

@class NSArray;

@interface OCFCTASubtask : OCFSubtask {
    /* instance variables */
    OCFHeader *_header;
}

@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) OCFRichText *detailText;
@property (readonly, nonatomic) OCFRichText *footerText;
@property (readonly, nonatomic) long long textAlignment;

/* class methods */
+ (id)typeNames;
+ (long long)version;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary subtaskID:(id)id typeName:(id)name backNavigationType:(long long)type backNavigationLink:(id)link error:(id *)error;
- (id)initWithSubtaskID:(id)id style:(long long)style primaryText:(id)text secondaryText:(id)text buttons:(id)buttons detailText:(id)text footerText:(id)text textAlignment:(long long)alignment backNavigationType:(long long)type;
- (id)header;

@end

#endif /* OCFCTASubtask_h */
