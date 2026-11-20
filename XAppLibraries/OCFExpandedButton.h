//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFExpandedButton_h
#define OCFExpandedButton_h
@import Foundation;

#include "OCFButton.h"
#include "OCFExpandedSeparator.h"

@interface OCFExpandedButton : OCFButton

@property (readonly, nonatomic) OCFExpandedSeparator *expandedSeparator;

@end

#endif /* OCFExpandedButton_h */
