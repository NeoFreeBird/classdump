//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
