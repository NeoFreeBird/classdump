//
#ifndef OCFMutableBooleanComponentData_h
#define OCFMutableBooleanComponentData_h
@import Foundation;

#include "OCFBooleanComponentData.h"
#include "OCFRichText.h"

@interface OCFMutableBooleanComponentData : OCFBooleanComponentData

@property (retain, nonatomic) OCFRichText *primaryText;
@property (retain, nonatomic) OCFRichText *secondaryText;
@property (nonatomic) _Bool value;

@end

#endif /* OCFMutableBooleanComponentData_h */
