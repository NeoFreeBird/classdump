//
#ifndef _TtCV11CodeScanner15CodeScannerView21ScannerViewController_h
#define _TtCV11CodeScanner15CodeScannerView21ScannerViewController_h
@import Foundation;

#include "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#include "AVCapturePhotoCaptureDelegate-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"
#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class CodeScanner.CodeScannerView ?, Swift.Bool, UIViewController, _$s10Foundation4DateVMn, _$sShySSG, _$sSo11UIImageViewCSgSg, _$sSo15AVCaptureDeviceCSg, _$sSo16AVCaptureSessionCSg, _$sSo20AVCapturePhotoOutputC, _$sSo26AVCaptureVideoPreviewLayerCSg, _$sSo8UIButtonCSg, _$sySo7UIImageCSgcSg;

@interface CodeScanner.CodeScannerView.ScannerViewController : UIViewController <AVCapturePhotoCaptureDelegate, UIAdaptivePresentationControllerDelegate, UIImagePickerControllerDelegate, AVCaptureMetadataOutputObjectsDelegate, UINavigationControllerDelegate> { // (Swift)
    /* instance variables */
    __C.AVCapturePhotoOutput photoOutput;
    Swift.Bool isCapturing;
    ((__C.UIImage?) -> ())? handler;
    CodeScanner.CodeScannerView ? parentView;
    Swift.Set<Swift.String> codesFound;
    Swift.Bool didFinishScanning;
    nominal type descriptor for Foundation.Date lastTime;
    Swift.Bool showViewfinder;
    __C.AVCaptureDevice? fallbackVideoCaptureDevice;
    Swift.Bool isGalleryShowing;
    __C.AVCaptureSession? captureSession;
    __C.AVCaptureVideoPreviewLayer? previewLayer;
    __C.UIImageView?? $__lazy_storage_$_viewFinder;
    __C.UIButton? $__lazy_storage_$_manualCaptureButton;
    __C.UIButton? $__lazy_storage_$_manualSelectButton;
}

@property (nonatomic, readonly) _Bool prefersStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

/* instance methods */
- (void)captureOutput:(id)output didFinishProcessingPhoto:(id)photo error:(id)error;
- (void)captureOutput:(id)output willCapturePhotoForResolvedSettings:(id)settings;
- (void)captureOutput:(id)output didCapturePhotoForResolvedSettings:(id)settings;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
- (void)captureOutput:(id)output didOutputMetadataObjects:(id)objects fromConnection:(id)connection;
- (id)initWithCoder:(id)coder;
- (void)openGalleryFromButton:(id)button;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateOrientation;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)manualCapturePressed:(id)pressed;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtCV11CodeScanner15CodeScannerView21ScannerViewController_h */
