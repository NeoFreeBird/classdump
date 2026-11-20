//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XVideoEditor24VideoEditorV1HostAdapter_h
#define _TtC12XVideoEditor24VideoEditorV1HostAdapter_h
@import Foundation;

#include "_TtP12XVideoEditor33VideoEditorViewControllerDelegate_-Protocol.h"

@class NSObject, _$sSo26XVEVideoEditorHostDelegate_pSgXw;

@interface XVideoEditor.VideoEditorV1HostAdapter : NSObject <XVideoEditor.VideoEditorViewControllerDelegate> { // (Swift)
    /* instance variables */
    weak __C.XVEVideoEditorHostDelegate? _host;
}

/* instance methods */
- (void)videoEditorViewController:(id)controller didEditVideo:(id)video;
- (void)videoEditorViewControllerDidCancel:(id)cancel;
- (void)videoEditorViewControllerDidFail:(id)fail;
- (void)videoEditorViewController:(id)controller didRequestAppendingPostText:(id)text;
- (id)init;

@end

#endif /* _TtC12XVideoEditor24VideoEditorV1HostAdapter_h */
