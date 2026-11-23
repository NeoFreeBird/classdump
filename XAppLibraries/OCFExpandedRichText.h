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
