//
#ifndef TFNAttributedTextRendererDelegate_Protocol_h
#define TFNAttributedTextRendererDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNAttributedTextModel.h"

@protocol TFNAttributedTextRendererDelegate <NSObject>

@required

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textRendererFrame;
@property (readonly, nonatomic) _Bool highlightAllText;
@property (readonly, nonatomic) long long verticalAlignment;
@property (readonly, nonatomic) TFNAttributedTextModel *textModel;

/* required instance methods */
- (id)activeRangesForAttributedTextRenderer:(id)renderer;

@optional

@end

#endif /* TFNAttributedTextRendererDelegate_Protocol_h */
