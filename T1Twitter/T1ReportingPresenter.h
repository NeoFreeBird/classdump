//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ReportingPresenter_h
#define T1ReportingPresenter_h
@import Foundation;

@class NSObject;

@interface T1ReportingPresenter : NSObject

/* class methods */
+ (id)presentReportFromViewController:(id)controller account:(id)account context:(id)context webViewRequestDelegate:(id)delegate flowControllerDelegate:(id)delegate onDismissBlock:(id /* block */)block;
+ (_Bool)shouldUseNativeZazuReportingForContext:(id)context account:(id)account;
+ (id)_makeFlowControllerForContext:(id)context account:(id)account delegate:(id)delegate;
+ (id)flowSpecForContext:(id)context account:(id)account;
+ (id)taskServiceForFlowSpec:(id)spec;

@end

#endif /* T1ReportingPresenter_h */
