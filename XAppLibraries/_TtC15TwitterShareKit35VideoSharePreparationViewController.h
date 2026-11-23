//
#ifndef _TtC15TwitterShareKit35VideoSharePreparationViewController_h
#define _TtC15TwitterShareKit35VideoSharePreparationViewController_h
@import Foundation;

@class Swift.Bool, TwitterShareKit.VideoShareProcessor, UIViewController, _$s10Foundation3URLVMn, _$s10Foundation4DataVMn _$sSgc ->, _$sSa -> TwitterShareKit.VideoShareProcessor.Operation, _$sSd, _$sSo24NSURLSessionDownloadTaskCSg, _$sSo6UIViewC;

@interface TwitterShareKit.VideoSharePreparationViewController : UIViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL videoURL;
    Swift.Double durationSeconds;
    Swift.Array -> TwitterShareKit.VideoShareProcessor.Operation operations;
    nominal type descriptor for Foundation.Data _$sSgc -> completion;
    TwitterShareKit.VideoShareProcessor processor;
    __C.NSURLSessionDownloadTask? downloadTask;
    Swift.Bool didCancel;
    __C.UIView progressBar;
    __C.UIView progressTrack;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC15TwitterShareKit35VideoSharePreparationViewController_h */
