//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift17T1ShareController_h
#define _TtC14T1TwitterSwift17T1ShareController_h
@import Foundation;

@class NSObject, _$s15TwitterShareKit0B23ActionViewModelDelegateMp ?;

@interface T1TwitterSwift.T1ShareController : NSObject { // (Swift)
    /* instance variables */
    protocol descriptor for TwitterShareKit.ShareActionViewModelDelegate ? viewModel;
}

/* class methods */
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)instance;

/* instance methods */
- (id)init;
- (id)actionItemsForShareable:(id)shareable account:(id)account layoutMetrics:(id)metrics viewController:(id)controller popoverSource:(id)source scribeContext:(id)context persistence:(id)persistence shareLinkSession:(id)session;
- (id)menuSheetActionItemsForShareable:(id)shareable account:(id)account layoutMetrics:(id)metrics viewController:(id)controller popoverSource:(id)source scribeContext:(id)context persistence:(id)persistence mediaShareURL:(id)url shareLinkSession:(id)session;
- (id)scribeOnlyMenuSheetActionItemsForShareable:(id)shareable account:(id)account layoutMetrics:(id)metrics viewController:(id)controller scribeContext:(id)context;
- (id)startedShareLinkSessionForStatus:(id)status account:(id)account scribeContext:(id)context;
- (id)startedShareLinkSessionForStatus:(id)status mintingURL:(id)url account:(id)account scribeContext:(id)context;

@end

#endif /* _TtC14T1TwitterSwift17T1ShareController_h */
