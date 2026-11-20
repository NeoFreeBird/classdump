//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP12XVideoEditor33VideoEditorViewControllerDelegate__Protocol_h
#define _TtP12XVideoEditor33VideoEditorViewControllerDelegate__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol XVideoEditor.VideoEditorViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)videoEditorViewController:(id)controller didEditVideo:(id)video;
- (void)videoEditorViewControllerDidCancel:(id)cancel;
- (void)videoEditorViewControllerDidFail:(id)fail;
- (void)videoEditorViewController:(id)controller didRequestAppendingPostText:(id)text;

@end

#endif /* _TtP12XVideoEditor33VideoEditorViewControllerDelegate__Protocol_h */
