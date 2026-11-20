//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTapGestureRecognizer_h
#define TFNTapGestureRecognizer_h
@import Foundation;

#include "TFNMenuCompatibleGestureRecognizerHelper.h"
#include "TFNMenuDisplayEvents-Protocol.h"
#include "TFNMenuSupport-Protocol.h"

@class NSString, UITapGestureRecognizer;

@interface TFNTapGestureRecognizer : UITapGestureRecognizer <TFNMenuSupport, TFNMenuDisplayEvents>

@property (retain, nonatomic) TFNMenuCompatibleGestureRecognizerHelper *menuHelper;
@property (readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
@property (readonly, copy, nonatomic) id /* block */ willDisplayMenuOnPrimaryActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ willDisplayMenuBlock;
@property (copy, nonatomic) id /* block */ willDismissMenuBlock;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;

@end

#endif /* TFNTapGestureRecognizer_h */
