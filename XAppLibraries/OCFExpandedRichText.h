//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFExpandedRichText_h
#define OCFExpandedRichText_h
@import Foundation;

#include "OCFRichText.h"

@class NSString;

@interface OCFExpandedRichText : OCFRichText

@property (readonly, nonatomic) NSString *text;

@end

#endif /* OCFExpandedRichText_h */
