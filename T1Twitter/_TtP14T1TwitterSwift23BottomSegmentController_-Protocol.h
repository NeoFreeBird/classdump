//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP14T1TwitterSwift23BottomSegmentController__Protocol_h
#define _TtP14T1TwitterSwift23BottomSegmentController__Protocol_h
@import Foundation;

#include "_TtP14T1TwitterSwift24TabBottomSegmentDockable_-Protocol.h"

@class NSArray, TFNViewController;

@protocol T1TwitterSwift.BottomSegmentController

@required

@property (nonatomic, readonly) TFNViewController<T1TwitterSwift.TabBottomSegmentDockable> *activeController;
@property (nonatomic, readonly) _Bool canAutoDock;
@property (nonatomic, readonly) NSArray *dockedControllers;

/* required instance methods */
- (void)setActiveController:(id)controller animated:(_Bool)animated;
- (void)dismissActiveControllerWithAnimated:(_Bool)animated;

@optional

/* optional instance methods */
- (void)dismiss:(id)dismiss animated:(_Bool)animated;

@end

#endif /* _TtP14T1TwitterSwift23BottomSegmentController__Protocol_h */
