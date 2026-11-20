//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMutableTwitterStatusDisplayAttributedTextModelOptions_h
#define TFNMutableTwitterStatusDisplayAttributedTextModelOptions_h
@import Foundation;

#include "TFNTwitterStatusDisplayAttributedTextModelFontOptions.h"
#include "TFNTwitterStatusDisplayAttributedTextModelOptions.h"

@class NSNumber, NSString, UIView;
@protocol TFNTwitterStatusDisplayTextAttachmentDelegate;

@interface TFNMutableTwitterStatusDisplayAttributedTextModelOptions : TFNTwitterStatusDisplayAttributedTextModelOptions

@property (nonatomic) unsigned long long textOptions;
@property (nonatomic) double width;
@property (copy, nonatomic) TFNTwitterStatusDisplayAttributedTextModelFontOptions *fontOptions;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool richTextEnabled;
@property (copy, nonatomic) NSString *trailingString;
@property (retain, nonatomic) NSNumber *maxLines;
@property (retain, nonatomic) UIView *colorProviderView;
@property (weak, nonatomic) id <TFNTwitterStatusDisplayTextAttachmentDelegate> attachmentDelegate;
@property (nonatomic) _Bool cachingEnabled;
@property (nonatomic) _Bool validatesCacheAgainstEffectiveMaxLines;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNMutableTwitterStatusDisplayAttributedTextModelOptions_h */
