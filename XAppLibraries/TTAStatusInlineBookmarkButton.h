//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusInlineBookmarkButton_h
#define TTAStatusInlineBookmarkButton_h
@import Foundation;

#include "TTAStatusInlineActionButton.h"

@interface TTAStatusInlineBookmarkButton : TTAStatusInlineActionButton

@property (nonatomic) long long showDisabledEducationForReason;

/* class methods */
+ (id)buttonImageNameForUIControlState:(unsigned long long)state viewModel:(id)model options:(unsigned long long)options account:(id)account;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)actionSheetTitle;
- (void)statusDidUpdate:(id)update options:(unsigned long long)options displayTextOptions:(unsigned long long)options animated:(_Bool)animated featureSwitches:(id)switches;
- (_Bool)shouldShowCount;
- (id)tintColorForUIControlState:(unsigned long long)state;

@end

#endif /* TTAStatusInlineBookmarkButton_h */
