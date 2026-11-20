//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusInlineRetweetButton_h
#define TTAStatusInlineRetweetButton_h
@import Foundation;

#include "TTAStatusInlineActionButton.h"

@interface TTAStatusInlineRetweetButton : TTAStatusInlineActionButton

@property (nonatomic) long long showDisabledEducationForReason;

/* class methods */
+ (id)buttonImageNameForUIControlState:(unsigned long long)state viewModel:(id)model options:(unsigned long long)options account:(id)account;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)actionSheetTitle;
- (void)statusDidUpdate:(id)update options:(unsigned long long)options displayTextOptions:(unsigned long long)options animated:(_Bool)animated featureSwitches:(id)switches;
- (id)buttonImageNameForUIControlState:(unsigned long long)state buttonSize:(unsigned long long)size;
- (id)tintColorForUIControlState:(unsigned long long)state;
- (id)animationTypeForTransitionToSelectedState;

@end

#endif /* TTAStatusInlineRetweetButton_h */
