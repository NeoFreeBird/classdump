//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusInlineFeedbackOptionsButton_h
#define TTAStatusInlineFeedbackOptionsButton_h
@import Foundation;

#include "TTAStatusInlineActionButton.h"

@interface TTAStatusInlineFeedbackOptionsButton : TTAStatusInlineActionButton

/* class methods */
+ (id)buttonImageNameForUIControlState:(unsigned long long)state viewModel:(id)model options:(unsigned long long)options account:(id)account;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)actionSheetTitle;
- (_Bool)shouldShowCount;
- (unsigned long long)visibility;

@end

#endif /* TTAStatusInlineFeedbackOptionsButton_h */
