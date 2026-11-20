//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift25T1JetfuelFrameHostingView_h
#define _TtC14T1TwitterSwift25T1JetfuelFrameHostingView_h
@import Foundation;

@class T1TwitterSwift.JetfuelTableViewCellEventsHandler, UIView, _$s10JetfuelSDK14JetFrameViewV2CMn ?, _$s10JetfuelSDK19JFEnvironmentValuesVMn, _$s10JetfuelSDK6JetEnvCMn, _$s10JetfuelSDK7RuntimeCMn, _$sSS, _$sSSSg, _$sSbSg, _$sSo16TIPImagePipelineC, _$sySbcSg;

@interface T1TwitterSwift.T1JetfuelFrameHostingView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.JetfuelTableViewCellEventsHandler eventsHandler;
    nominal type descriptor for JetfuelSDK.Runtime runtime;
    nominal type descriptor for JetfuelSDK.JetEnv env;
    Swift.String accountID;
    __C.TIPImagePipeline imagePipeline;
    Swift.String? payload;
    nominal type descriptor for JetfuelSDK.JFEnvironmentValues rootEnv;
    nominal type descriptor for JetfuelSDK.JetFrameViewV2 ? frameView;
    Swift.Bool? drivenVisibility;
    ((Swift.Bool) -> ())? onRelayout;
}

@property (nonatomic, copy) id /* block */ urlOpenInterceptor;
@property (nonatomic, readonly) _Bool hostsFullBleedContent;

/* class methods */
+ (long long)postVariantForViewModel:(id)model options:(unsigned long long)options;
+ (struct CGSize { double x0; double x1; })sizeForWidth:(double)width payload:(id)payload postVariant:(long long)variant hostPostID:(long long)id account:(id)account defaultHeight:(double)height;
+ (struct CGSize { double x0; double x1; })sizeForWidth:(double)width payload:(id)payload account:(id)account defaultHeight:(double)height;

/* instance methods */
- (void)configureWith:(id)with postVariant:(long long)variant hostPostID:(long long)id parentVC:(id)vc;
- (id)initWithAccount:(id)account width:(double)width;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)dynamicColorsDidReloadWithNotification:(id)notification;
- (void)configureWith:(id)with parentVC:(id)vc;
- (void)didMoveToSuperview;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift25T1JetfuelFrameHostingView_h */
