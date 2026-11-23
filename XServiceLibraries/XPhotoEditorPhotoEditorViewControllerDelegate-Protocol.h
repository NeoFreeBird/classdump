//
#ifndef XPhotoEditorPhotoEditorViewControllerDelegate_Protocol_h
#define XPhotoEditorPhotoEditorViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol XPhotoEditorPhotoEditorViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)photoEditor:(id)editor didFinishWith:(id)with;
- (void)photoEditorDidCancel:(id)cancel;
- (_Bool)photoEditorCanEditWithGrok:(id)grok;
- (void)photoEditor:(id)editor didRequestGrokEditWithImage:(id)image;

@optional

/* optional instance methods */
- (void)photoEditorDidChangeActiveTool:(id)tool;

@end

#endif /* XPhotoEditorPhotoEditorViewControllerDelegate_Protocol_h */
