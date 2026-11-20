//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBTextFieldComponentTransformer_h
#define ONBTextFieldComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"
#include "TFNFormFieldViewDelegate-Protocol.h"

@class NSString, TFNFormFieldView;

@interface ONBTextFieldComponentTransformer : ONBComponentTransformer <TFNFormFieldViewDelegate> {
    /* instance variables */
    TFNFormFieldView *_formFieldView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (_Bool)updateRichText:(id)text;
- (void)formFieldViewContentSizeDidChange:(id)change;
- (void)formFieldView:(id)view didChangeText:(id)text fromText:(id)text;
- (_Bool)formFieldViewShouldReturn:(id)_return;
- (id)private_nextFormFieldView:(id)view;
- (id)private_cellForView:(id)view;

@end

#endif /* ONBTextFieldComponentTransformer_h */
