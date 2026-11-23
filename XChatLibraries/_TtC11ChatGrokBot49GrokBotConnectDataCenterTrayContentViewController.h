//
#ifndef _TtC11ChatGrokBot49GrokBotConnectDataCenterTrayContentViewController_h
#define _TtC11ChatGrokBot49GrokBotConnectDataCenterTrayContentViewController_h
@import Foundation;

@class Swift.Bool, _$s13XDesignSystem16TrayFootnoteViewCMn, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSSSg, _$sySScSg, _$syycSg;

@interface ChatGrokBot.GrokBotConnectDataCenterTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onChoose;
    (() -> ())? onDecline;
    nominal type descriptor for XDesignSystem.TrayFootnoteView missingChoiceView;
    Swift.String? chosenID;
    Swift.Bool isChoiceMissing;
    Swift.Bool isResolved;
}

/* instance methods */
- (void)viewDidDisappear:(_Bool)disappear;

@end

#endif /* _TtC11ChatGrokBot49GrokBotConnectDataCenterTrayContentViewController_h */
