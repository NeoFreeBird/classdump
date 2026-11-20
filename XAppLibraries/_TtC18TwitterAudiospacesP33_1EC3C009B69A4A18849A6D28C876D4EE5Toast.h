//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterAudiospacesP33_1EC3C009B69A4A18849A6D28C876D4EE5Toast_h
#define _TtC18TwitterAudiospacesP33_1EC3C009B69A4A18849A6D28C876D4EE5Toast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, TFNToastScribeContext;

@interface TwitterAudiospaces.(Toast in _1EC3C009B69A4A18849A6D28C876D4EE) : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 iconAvatar;
    @40@0:8:16@24@32 imagePipeline;
    @40@0:8:16@24@32 scribeElement;
}

@property (nonatomic, copy) NSString *messageText;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, retain) TFNToastAction *primaryAction;
@property (nonatomic, retain) TFNToastAction *alternateAction;
@property (nonatomic, readonly) id /* block */ iconAccessoryViewProvider;
@property (nonatomic, readonly) TFNToastScribeContext *scribeContext;

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterAudiospacesP33_1EC3C009B69A4A18849A6D28C876D4EE5Toast_h */
