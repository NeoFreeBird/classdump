//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVErrorLabel_h
#define TAVErrorLabel_h
@import Foundation;

#include "TAVPlayback-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"

@class UILabel;

@interface TAVErrorLabel : UILabel <TAVPlaybackObserver>

@property (weak, nonatomic) id <TAVPlayback> player;
@property (nonatomic) _Bool errorObserved;
@property (copy, nonatomic) id /* block */ errorTextBlock;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)setText:(id)text;
- (void)setAttributedText:(id)text;
- (void)_tav_setUp;
- (void)_tav_dropStaleErrorText;
- (void)_tav_updateHiddenState;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* TAVErrorLabel_h */
