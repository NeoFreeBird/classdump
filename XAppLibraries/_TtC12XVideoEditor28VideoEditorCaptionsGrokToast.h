//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor28VideoEditorCaptionsGrokToast_h
#define _TtC12XVideoEditor28VideoEditorCaptionsGrokToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, _$sSS, _$sSSSg, _$sSd, _$sSo14TFNToastActionCSg, __C.TFNToastPriority;

@interface XVideoEditor.VideoEditorCaptionsGrokToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    __C.TFNToastPriority priority;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) double displayDuration;
@property (nonatomic, readonly) TFNToastAction *alternateAction;
@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12XVideoEditor28VideoEditorCaptionsGrokToast_h */
