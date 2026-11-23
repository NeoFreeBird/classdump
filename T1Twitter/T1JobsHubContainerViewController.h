//
#ifndef T1JobsHubContainerViewController_h
#define T1JobsHubContainerViewController_h
@import Foundation;

@class _$s10TFNUISwift20TFNHostingControllerCN;

@interface T1JobsHubContainerViewController : type metadata for TFNUISwift.TFNHostingController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *rootViewModel;
    NSNumber"16@0:8 *_actionService;
    NSNumber"16@0:8 *$__lazy_storage_$_shareJobButton;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithAccount:(id)account jobId:(id)id trackingID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)openShareSheet;

@end

#endif /* T1JobsHubContainerViewController_h */
