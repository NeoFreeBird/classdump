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
