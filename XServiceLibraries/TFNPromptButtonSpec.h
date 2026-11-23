//
#ifndef TFNPromptButtonSpec_h
#define TFNPromptButtonSpec_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNPromptSeparatorSpec.h"

@class NSNumber, NSObject, NSString, UIColor;

@interface TFNPromptButtonSpec : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *highlightBackgroundColor;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) id /* block */ action;
@property (readonly, nonatomic) _Bool preferFullWidth;
@property (readonly, nonatomic) _Bool renderAsTemplate;
@property (readonly, nonatomic) NSNumber *imageTitlePadding;
@property (readonly, nonatomic) TFNPromptSeparatorSpec *separatorSpec;
@property (readonly, nonatomic) long long style;

/* instance methods */
- (id)initWithTitle:(id)title style:(long long)style action:(id /* block */)action;
- (id)initWithTitle:(id)title style:(long long)style tintColor:(id)color action:(id /* block */)action;
- (id)initWithTitle:(id)title style:(long long)style tintColor:(id)color imageName:(id)name preferFullWidth:(_Bool)width action:(id /* block */)action;
- (id)initWithTitle:(id)title style:(long long)style tintColor:(id)color imageName:(id)name renderAsTemplate:(_Bool)_template imageTitlePadding:(id)padding preferFullWidth:(_Bool)width separatorSpec:(id)spec action:(id /* block */)action;
- (id)initWithTitle:(id)title style:(long long)style tintColor:(id)color backgroundColor:(id)color highlightBackgroundColor:(id)color titleColor:(id)color borderColor:(id)color imageName:(id)name renderAsTemplate:(_Bool)_template imageTitlePadding:(id)padding preferFullWidth:(_Bool)width separatorSpec:(id)spec action:(id /* block */)action;
- (id)buttonWithSizeClass:(long long)_class;
- (void)private_buttonAction:(id)action;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNPromptButtonSpec_h */
