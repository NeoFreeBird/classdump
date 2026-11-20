//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26PhotoEditorDelegateHandler_h
#define _TtC14T1TwitterSwift26PhotoEditorDelegateHandler_h
@import Foundation;

#include "XPhotoEditorPhotoEditorViewControllerDelegate-Protocol.h"

@class NSObject, _$s12XPhotoEditor0B6ResultCMn _$sSgc ->, _$s4Grok0A34ImagineLightboxPresentationManagerCMn ?, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.PhotoEditorDelegateHandler : NSObject <XPhotoEditorPhotoEditorViewControllerDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for XPhotoEditor.EditorResult _$sSgc -> completion;
    nominal type descriptor for Grok.GrokImagineLightboxPresentationManager ? grokImagineLightboxManager;
}

/* instance methods */
- (void)photoEditor:(id)editor didFinishWith:(id)with;
- (void)photoEditorDidCancel:(id)cancel;
- (_Bool)photoEditorCanEditWithGrok:(id)grok;
- (void)photoEditor:(id)editor didRequestGrokEditWithImage:(id)image;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift26PhotoEditorDelegateHandler_h */
