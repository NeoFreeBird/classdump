//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTiledTextLayerState_h
#define TFNTiledTextLayerState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSActiveTextRange-Protocol.h"

@class NSAttributedString, NSObject, UIColor;

@interface TFNTiledTextLayerState : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct __CTFrame * ctFrame;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) id <TFSActiveTextRange> hitRange;
@property (readonly, nonatomic) UIColor *selectionColor;

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)stateWithAttributedString:(id)string ctFrame:(struct __CTFrame *)frame transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (id)stateWithHitRange:(id)range;
- (id)stateWithSelectionColor:(id)color;

@end

#endif /* TFNTiledTextLayerState_h */
