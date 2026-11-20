//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFMutableListComponentData_h
#define OCFMutableListComponentData_h
@import Foundation;

#include "OCFListComponentData.h"
#include "OCFRichText.h"

@class NSMutableArray;

@interface OCFMutableListComponentData : OCFListComponentData {
    /* instance variables */
    NSMutableArray *_mutableAllowedValues;
    NSMutableArray *_mutableSelectedValues;
}

@property (retain, nonatomic) OCFRichText *primaryText;
@property (retain, nonatomic) OCFRichText *secondaryText;
@property (nonatomic) _Bool isSearchEnabled;
@property (retain, nonatomic) NSMutableArray *allowedValues;
@property (retain, nonatomic) NSMutableArray *selectedValues;

/* instance methods */

@end

#endif /* OCFMutableListComponentData_h */
