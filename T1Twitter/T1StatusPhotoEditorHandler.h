//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusPhotoEditorHandler_h
#define T1StatusPhotoEditorHandler_h
@import Foundation;

#include "PhotoEditorScribeManager.h"
#include "XPhotoEditorPhotoEditorViewControllerDelegate-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, UIViewController;

@interface T1StatusPhotoEditorHandler : NSObject <XPhotoEditorPhotoEditorViewControllerDelegate>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) UIViewController *presentingController;
@property (retain, nonatomic) PhotoEditorScribeManager *scribeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account presentingController:(id)controller;
- (void)presentWithImage:(id)image;
- (void)photoEditor:(id)editor didFinishWith:(id)with;
- (void)photoEditorDidCancel:(id)cancel;
- (_Bool)photoEditorCanEditWithGrok:(id)grok;
- (void)photoEditor:(id)editor didRequestGrokEditWithImage:(id)image;

@end

#endif /* T1StatusPhotoEditorHandler_h */
