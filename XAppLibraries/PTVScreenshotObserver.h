//
#ifndef PTVScreenshotObserver_h
#define PTVScreenshotObserver_h
@import Foundation;

#include "PTVScreenshotObserverDelegate-Protocol.h"
#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class NSObject, NSString;

@interface PTVScreenshotObserver : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    /* instance variables */
    PTVScreenshotObserver *_weakSelf;
    id /* block */ _imagePickerCompletion;
}

@property (readonly, nonatomic) _Bool observingScreenshotNotifications;
@property (weak, nonatomic) id <PTVScreenshotObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (void)startObserving;
- (void)stopObserving;
- (void)startObservingScreenshotNotifications;
- (void)stopObservingScreenshotNotifications;
- (void)userDidTakeScreenshot;
- (void)fetchMostRecentScreenshotFromViewController:(id)controller completion:(id /* block */)completion;
- (_Bool)isObservingScreenshotNotifications;

@end

#endif /* PTVScreenshotObserver_h */
