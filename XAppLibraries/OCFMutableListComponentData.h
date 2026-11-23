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
