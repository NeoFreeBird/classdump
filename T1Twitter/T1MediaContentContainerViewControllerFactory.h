//
#ifndef T1MediaContentContainerViewControllerFactory_h
#define T1MediaContentContainerViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1MediaContentContainerViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)videoWebsiteViewControllerForHeaderViewModel:(id)model rootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component transitionObject:(id)object;
+ (id)imageAppStoreViewControllerForHeaderViewModel:(id)model context:(id)context account:(id)account transitionObject:(id)object;
+ (id)videoAppStoreViewControllerForHeaderViewModel:(id)model context:(id)context account:(id)account transitionObject:(id)object;
+ (id)dockedVideoWebsiteViewControllerForPresenting:(id)presenting with:(id)with forMedia:(id)media targetWebsite:(id)website videoAspect:(double)aspect shouldAutoAdvanceVideo:(_Bool)video transitionObject:(id)object scribeComponentConstant:(id)constant;

/* instance methods */
- (id)init;

@end

#endif /* T1MediaContentContainerViewControllerFactory_h */
