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
