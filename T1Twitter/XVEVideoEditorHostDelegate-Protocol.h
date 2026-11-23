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
