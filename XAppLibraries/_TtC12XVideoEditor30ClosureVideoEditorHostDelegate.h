//
#ifndef _TtC12XVideoEditor30ClosureVideoEditorHostDelegate_h
#define _TtC12XVideoEditor30ClosureVideoEditorHostDelegate_h
@import Foundation;

#include "XVEVideoEditorHostDelegate-Protocol.h"

@class NSObject, XVideoEditor.ClosureVideoEditorHostDelegate.Callbacks ?;

@interface XVideoEditor.ClosureVideoEditorHostDelegate : NSObject <XVEVideoEditorHostDelegate> { // (Swift)
    /* instance variables */
    XVideoEditor.ClosureVideoEditorHostDelegate.Callbacks ? _callbacks;
}

/* instance methods */
- (void)videoEditor:(id)editor didFinishWithAsset:(id)asset;
- (void)videoEditorDidCancel:(id)cancel;
- (void)videoEditorDidFail:(id)fail;
- (id)init;

@end

#endif /* _TtC12XVideoEditor30ClosureVideoEditorHostDelegate_h */
