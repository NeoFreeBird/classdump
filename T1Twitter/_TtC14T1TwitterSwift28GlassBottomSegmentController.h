//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28GlassBottomSegmentController_h
#define _TtC14T1TwitterSwift28GlassBottomSegmentController_h
@import Foundation;

#include "_TtP14T1TwitterSwift23BottomSegmentController_-Protocol.h"
#include "_TtP14T1TwitterSwift24TabBottomSegmentDockable_-Protocol.h"

@class NSArray, NSObject, TFNViewController, _$s11XNavigation16TabBarControllerCMn ?, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn T1TwitterSwift.GlassBottomSegmentController.VisibilityChange _$ss5NeverOMn, _$sSa -> T1TwitterSwift.GlassBottomSegmentController.Dock, _$sSi;

@interface T1TwitterSwift.GlassBottomSegmentController : NSObject <T1TwitterSwift.BottomSegmentController> { // (Swift)
    /* instance variables */
    nominal type descriptor for XNavigation.TabBarController ? tabBarController;
    Swift.Array -> T1TwitterSwift.GlassBottomSegmentController.Dock docks;
    Swift.Array -> T1TwitterSwift.GlassBottomSegmentController.Dock dismissingDocks;
    Swift.Int nextAccessoryIndex;
    nominal type descriptor for Combine.AnyCancellable ? tabBarEventsCancellable;
    nominal type descriptor for Combine.PassthroughSubject T1TwitterSwift.GlassBottomSegmentController.VisibilityChange nominal type descriptor for Swift.Never visibilitySubject;
}

@property (nonatomic, readonly) NSArray *dockedControllers;
@property (nonatomic, readonly) TFNViewController<T1TwitterSwift.TabBottomSegmentDockable> *activeController;
@property (nonatomic, readonly) _Bool canAutoDock;

/* instance methods */
- (void)setActiveController:(id)controller animated:(_Bool)animated;
- (void)dismissActiveControllerWithAnimated:(_Bool)animated;
- (void)dismiss:(id)dismiss animated:(_Bool)animated;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift28GlassBottomSegmentController_h */
