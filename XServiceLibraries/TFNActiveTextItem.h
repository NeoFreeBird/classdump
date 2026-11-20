//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNActiveTextItem_h
#define TFNActiveTextItem_h
@import Foundation;

#include "TFNAttributedTextModel.h"
#include "TFNDataViewController.h"
#include "TFNItemTraitsContainer-Protocol.h"

@class NSArray, NSNumber, NSObject, NSString, UIColor, UIImage;

@interface TFNActiveTextItem : NSObject <TFNItemTraitsContainer>

@property (weak, nonatomic) TFNDataViewController *controller;
@property (readonly, nonatomic) TFNAttributedTextModel *textModel;
@property (readonly, copy, nonatomic) NSArray *activeRanges;
@property (nonatomic) long long verticalAlignment;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *selectionColor;
@property (nonatomic) _Bool selectionPaddingEnabled;
@property (nonatomic) _Bool shouldHorizontallyCenterText;
@property (nonatomic) long long separatorType;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ didTapTruncationAreaBlock;
@property (copy, nonatomic) id /* block */ didTapInactiveAreaBlock;
@property (copy, nonatomic) id /* block */ didLongPressInactiveAreaBlock;
@property (copy, nonatomic) id /* block */ didTapActiveRangeBlock;
@property (copy, nonatomic) id /* block */ didLongPressActiveRangeBlock;
@property (retain, nonatomic) NSNumber *overrideTopContentInset;
@property (retain, nonatomic) NSNumber *overrideLeftContentInset;
@property (retain, nonatomic) NSNumber *overrideBottomContentInset;
@property (retain, nonatomic) NSNumber *overrideRightContentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)itemWithFormat:(id)format insertions:(id)insertions font:(id)font alignment:(long long)alignment textColor:(id)color selectionColor:(id)color separatorType:(long long)type;
+ (id)itemWithString:(id)string font:(id)font alignment:(long long)alignment textColor:(id)color separatorType:(long long)type;

/* instance methods */
- (id)init;
- (id)initWithTextModel:(id)model activeRanges:(id)ranges;
- (_Bool)isSelectionPaddingEnabled;

@end

#endif /* TFNActiveTextItem_h */
