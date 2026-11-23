//
#ifndef TFNTwitterStatusDisplayAttributedTextModelOptions_h
#define TFNTwitterStatusDisplayAttributedTextModelOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "TFNTwitterStatusDisplayAttributedTextModelFontOptions.h"

@class NSNumber, NSObject, NSString, UIView;
@protocol TFNTwitterStatusDisplayTextAttachmentDelegate;

@interface TFNTwitterStatusDisplayAttributedTextModelOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long textOptions;
@property (readonly, nonatomic) double width;
@property (readonly, copy, nonatomic) TFNTwitterStatusDisplayAttributedTextModelFontOptions *fontOptions;
@property (readonly, nonatomic) _Bool highlighted;
@property (readonly, nonatomic) _Bool richTextEnabled;
@property (readonly, copy, nonatomic) NSString *trailingString;
@property (readonly, nonatomic) NSNumber *maxLines;
@property (readonly, nonatomic) UIView *colorProviderView;
@property (readonly, weak, nonatomic) id <TFNTwitterStatusDisplayTextAttachmentDelegate> attachmentDelegate;
@property (readonly, nonatomic) _Bool cachingEnabled;
@property (readonly, nonatomic) _Bool validatesCacheAgainstEffectiveMaxLines;

/* instance methods */
- (id)init;
- (id)initWithAttributedTextModelOptions:(id)options;
- (id)initWithTextOptions:(unsigned long long)options width:(double)width fontOptions:(id)options highlighted:(_Bool)highlighted richTextEnabled:(_Bool)enabled trailingString:(id)string maxLines:(id)lines colorProviderView:(id)view attachmentDelegate:(id)delegate cachingEnabled:(_Bool)enabled;
- (_Bool)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (_Bool)isHighlighted;
- (_Bool)isRichTextEnabled;

@end

#endif /* TFNTwitterStatusDisplayAttributedTextModelOptions_h */
