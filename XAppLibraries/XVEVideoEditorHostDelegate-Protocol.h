//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XVEVideoEditorHostDelegate_Protocol_h
#define XVEVideoEditorHostDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol XVEVideoEditorHostDelegate <NSObject>

@required

/* required instance methods */
- (void)videoEditor:(id)editor didFinishWithAsset:(id)asset;
- (void)videoEditorDidCancel:(id)cancel;

@optional

/* optional instance methods */
- (void)videoEditorDidFail:(id)fail;
- (void)videoEditor:(id)editor didRequestAppendingPostText:(id)text;

@end

#endif /* XVEVideoEditorHostDelegate_Protocol_h */
