//
#ifndef TFNAttributedActiveTextModel_h
#define TFNAttributedActiveTextModel_h
@import Foundation;

#include "TFNAttributedTextModel.h"

@class NSArray, NSObject;

@interface TFNAttributedActiveTextModel : NSObject

@property (readonly, nonatomic) TFNAttributedTextModel *textModel;
@property (readonly, copy, nonatomic) NSArray *activeRanges;

/* instance methods */
- (id)initWithTextModel:(id)model activeRanges:(id)ranges;

@end

#endif /* TFNAttributedActiveTextModel_h */
