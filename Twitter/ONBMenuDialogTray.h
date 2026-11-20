//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBMenuDialogTray_h
#define ONBMenuDialogTray_h
@import Foundation;

@class NSObject;

@interface ONBMenuDialogTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithSubtask:(id)subtask subtaskDataProvider:(id)provider onActivateLink:(id /* block */)link;

/* instance methods */
- (id)init;

@end

#endif /* ONBMenuDialogTray_h */
