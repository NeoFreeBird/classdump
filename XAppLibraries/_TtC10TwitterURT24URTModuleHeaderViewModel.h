//
#ifndef _TtC10TwitterURT24URTModuleHeaderViewModel_h
#define _TtC10TwitterURT24URTModuleHeaderViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, Swift.Bool, TwitterURT.URTModuleHeaderViewModel.TitleStyle, _$s10TFSURTCore14URTHorizonIconOMn ?, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$s10TFSURTCore16URTTimelineEntryV7ContentO6ModuleV6HeaderV11DisplayTypeOMn, _$s10TFSURTCore6URTUrlCMn ?, _$sSS, _$sSS7entryID_ _$s14TFSTwitterCore18URTFeedbackContextCMn contexttSg, _$sSSSg;

@interface TwitterURT.URTModuleHeaderViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    Swift.String text;
    Swift.String? subtext;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
    Swift.StringentryID first-element-marker  nominal type descriptor for TFSTwitterCore.URTFeedbackContext contexttSg actionableFeedbackMetadata;
    TwitterURT.URTModuleHeaderViewModel.TitleStyle titleStyle;
    nominal type descriptor for TFSURTCore.URTHorizonIcon ? icon;
    Swift.Bool displayAsSticky;
    nominal type descriptor for TFSURTCore.URTUrl ? landingUrl;
    Swift.Bool shouldLogImpression;
    Swift.Bool suppressDividers;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Module.Header.DisplayType displayType;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT24URTModuleHeaderViewModel_h */
