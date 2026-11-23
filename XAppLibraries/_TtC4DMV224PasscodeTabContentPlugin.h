//
#ifndef _TtC4DMV224PasscodeTabContentPlugin_h
#define _TtC4DMV224PasscodeTabContentPlugin_h
@import Foundation;

#include "_TtP14DMPasscodeFlow20PasscodeFlowListener_-Protocol.h"

@class DMModels.TabStateStream, DMPasscodeFlow.PasscodeFlowBuilder, DMV2.TabContentPluginContext, Swift.Bool, _TtCs12_SwiftObject;

@interface DMV2.PasscodeTabContentPlugin : Swift._SwiftObject <DMPasscodeFlow.PasscodeFlowListener> { // (Swift)
    /* instance variables */
    DMV2.TabContentPluginContext context;
    DMPasscodeFlow.PasscodeFlowBuilder passcodeFlowBuilder;
    DMModels.TabStateStream tabStateStream;
    Swift.Bool showsInboxNavigationBarItems;
}

/* instance methods */
- (void)passcodeFlowDidFinishWithViewController:(id)controller;

@end

#endif /* _TtC4DMV224PasscodeTabContentPlugin_h */
