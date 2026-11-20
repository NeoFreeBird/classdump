//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAttributedTextViewDelegate_Protocol_h
#define TFNAttributedTextViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNAttributedTextViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didDoubleTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didDoubleTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didLongPressRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didLongPressRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (_Bool)attributedTextView:(id)view shouldRecognizeLongPressOnRange:(id)range;
- (_Bool)attributedTextView:(id)view shouldRecognizeLongPressOnRange:(id)range;
- (void)attributedTextViewDidTapInactiveArea:(id)area;
- (void)attributedTextViewDidDoubleTapInactiveArea:(id)area;
- (void)attributedTextViewDidLongPressInactiveArea:(id)area;
- (void)attributedTextViewDidTapTruncatedBodyArea:(id)area;
- (_Bool)attributedTextViewTextTapExpansionEnabled;
- (void)attributedTextView:(id)view didTapTruncationTokenAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didTapTruncationTokenAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didCopyString:(id)string;
- (void)attributedTextView:(id)view didCopyString:(id)string;

@end

#endif /* TFNAttributedTextViewDelegate_Protocol_h */
