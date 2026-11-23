//
#ifndef TTAStatusInlineGrokButton_h
#define TTAStatusInlineGrokButton_h
@import Foundation;

#include "TTAStatusInlineActionButton.h"

@interface TTAStatusInlineGrokButton : TTAStatusInlineActionButton

/* class methods */
+ (id)buttonImageNameForUIControlState:(unsigned long long)state viewModel:(id)model options:(unsigned long long)options account:(id)account;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (void)statusDidUpdate:(id)update options:(unsigned long long)options displayTextOptions:(unsigned long long)options animated:(_Bool)animated featureSwitches:(id)switches;
- (id)_grokAnalyzeContextMenuWithShowOtherOption:(_Bool)option;
- (id)actionSheetTitle;
- (_Bool)shouldShowCount;
- (unsigned long long)visibility;

@end

#endif /* TTAStatusInlineGrokButton_h */
